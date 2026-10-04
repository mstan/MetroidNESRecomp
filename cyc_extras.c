/* Metroid's cycle host: original guest password encoder and input path,
 * existing asynchronous writer, widescreen/actor adapters and voxel profile. */
#include "cyc_host_extras.h"
#include "cyc_ring.h"
#include "cyc_tcp.h"
#include "cycle_bridge.h"
#include "cycle_regions.h"
#include "metroid_ws.h"
#include "game_voxel.h"
#include "password_writer.h"
#include "keybinds.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif
static void get_exe_relative_path(const char *name,char *out,int cap) {
    char *base=SDL_GetBasePath();snprintf(out,cap,"%s%s",base?base:"",name);SDL_free(base);
}
#define MET_WRAM_OFF(a)   ((int)(a) - 0x6000)     /* CPU address -> g_sram index */
#define MET_PW_LEN        24
#define MET_CODES_OFF     MET_WRAM_OFF(MET_PasswordChar)          /* $699A */
#define MET_SCRATCH_LO    MET_WRAM_OFF(MET_NumberOfUniqueItems)   /* $6886 */
#define MET_SCRATCH_HI    MET_WRAM_OFF(MET_NARPASSWORD)           /* $69B2, exclusive */

/* Metroid password char code (0-63) -> ASCII glyph.  Linear alphabet index:
 * 0-9, A-Z, a-z, then '?' (62) and '-' (63). */
static char metroid_index_to_char(int idx) {
    idx &= 0x3F;
    if (idx < 10) return (char)('0' + idx);
    if (idx < 36) return (char)('A' + (idx - 10));
    if (idx < 62) return (char)('a' + (idx - 36));
    return (idx == 62) ? '?' : '-';
}

/* Inverse: ASCII glyph -> code (0-63), or -1 if not a valid password char. */
static int metroid_char_to_index(char ch) {
    if (ch >= '0' && ch <= '9') return ch - '0';
    if (ch >= 'A' && ch <= 'Z') return 10 + (ch - 'A');
    if (ch >= 'a' && ch <= 'z') return 36 + (ch - 'a');
    if (ch == '?') return 62;
    if (ch == '-') return 63;
    return -1;
}

/* ---- Password state ---- */
static char s_loaded_password[MET_PW_LEN + 1];  /* current saved password (prefill source) */
static char s_saved_password[MET_PW_LEN + 1];   /* last password queued (main thread only) */
static const char *s_password = NULL;           /* active prefill string (loaded or --password) */
static int  s_password_from_cli = 0;            /* 1 if --password given (dev override) */
static int  s_capture_enabled = 1;              /* save-anywhere auto-capture on/off */
static int  s_pw_session_logged = 0;            /* lazy session header in the log */

/* Generate the password for the CURRENT progress by running the game's own
 * encoder out-of-band, then reading the 24 codes it writes to $699A. Writes a
 * NUL-terminated ASCII password to `out`. Returns its length (0 on failure).
 * Leaves live game state untouched (snapshot/restore). */
static int metroid_generate_password(char *out,int out_sz) {
    if(out_sz<25 || !cyc_mod_isolate_begin())return 0;
    cyc_mod_poke(MET_RandomNumber1,0);
    CycModRegs regs;cyc_mod_regs(&regs);regs.s=0xfd;regs.y=0;
    bool ok=cyc_mod_call(met_cycle_address(MET_CYCLE_BANK_SWITCH_USA),&regs);
    if(ok){regs.s=0xfd;ok=cyc_mod_call(0x8c7a,&regs);}
    if(ok){for(int i=0;i<24;i++)out[i]=metroid_index_to_char(cyc_mod_peek(MET_PasswordChar+i));out[24]=0;}
    cyc_mod_isolate_end();return ok?24:0;
}

/* ---- metroid.srm sidecar (the launcher reads/writes this same file) ---- */

static void password_save_path(char *out, int max_len) {
    get_exe_relative_path("metroid.srm", out, max_len);
}

static int password_save_write(const char *pw) {
    char path[512];
    password_save_path(path, sizeof(path));
    FILE *f = fopen(path, "w");
    if (!f) return 0;
    int ok = fprintf(f, "%s\n", pw) > 0;
    if (fclose(f) != 0) ok = 0;
    if (ok) printf("[Password] Saved \"%s\"\n", pw);
    return ok;
}

/* Load the persisted password (fills s_loaded_password). Returns 1 on success. */
static int password_save_read(void) {
    char path[512];
    password_save_path(path, sizeof(path));
    FILE *f = fopen(path, "r");
    if (!f) return 0;
    char line[64];
    int ok = fgets(line, sizeof(line), f) != NULL;
    fclose(f);
    if (!ok) return 0;
    int len = (int)strlen(line);
    while (len > 0 && (line[len-1] == '\n' || line[len-1] == '\r')) line[--len] = '\0';
    if (len == 0 || len > MET_PW_LEN) return 0;
    for (int i = 0; i < len; i++) if (metroid_char_to_index(line[i]) < 0) return 0;
    memcpy(s_loaded_password, line, len + 1);
    snprintf(s_saved_password, sizeof(s_saved_password), "%s", line);
    return 1;
}

/* Append every distinct captured password to a timestamped history next to the
 * exe, so the player can "go back in time" by re-entering an older password. */
static int password_log_append(const char *pw, time_t now) {
    char path[512];
    get_exe_relative_path("metroid_password_log.txt", path, sizeof(path));
    FILE *f = fopen(path, "a");
    if (!f) return 0;
    struct tm *lt = localtime(&now);
    char ts[32] = "????-??-?? ??:??:??";
    if (lt) strftime(ts, sizeof(ts), "%Y-%m-%d %H:%M:%S", lt);
    if (!s_pw_session_logged) {
        fprintf(f, "# --- session %s ---\n", ts);
        s_pw_session_logged = 1;
    }
    fprintf(f, "%s  %s\n", ts, pw);
    int ok = !ferror(f);
    if (fclose(f) != 0) ok = 0;
    return ok;
}

/* Worker callback: host paths and immutable captured text only. */
static int password_persist(const char *pw, time_t captured_at) {
    int saved = password_save_write(pw);
    int logged = password_log_append(pw, captured_at);
    return saved && logged;
}

/* A blank password (all '0' codes) means no progress yet — don't persist it. */
static int password_is_blank(const char *pw) {
    for (int i = 0; pw[i]; i++) if (pw[i] != '0') return 0;
    return 1;
}

/* Per-frame save-anywhere capture (called from game_post_nmi). Gated to real
 * gameplay: $1D is 0 in active play, 1 on the title/menu screens (so we never
 * capture the empty title-screen state). Skips the blank/no-progress password
 * and persists only on change. */
static void password_capture_tick(uint64_t frame_count) {
    if (!cyc_host_saves_enabled() || !s_capture_enabled || s_password_from_cli) return;
    if ((frame_count % 300) != 0) return;        /* ~every 5 s */
    if (g_ram[MET_GameMode] != 0) return;        /* 0 = in gameplay; 1 = title/menu */
    if (password_writer_failed()) s_saved_password[0] = '\0'; /* retry failed I/O */

    char pw[MET_PW_LEN + 1];
    uint64_t started = watchdog_span_begin();
    int encoded = metroid_generate_password(pw, sizeof(pw));
    watchdog_span_end("password_encode", started);
    if (encoded <= 0) return;
    if (password_is_blank(pw)) return;               /* no progress yet */
    if (strcmp(pw, s_saved_password) == 0) return;   /* unchanged */

    started = watchdog_span_begin();
    if (password_writer_start(password_persist)) {
        password_writer_submit(pw, time(NULL));
        snprintf(s_saved_password, sizeof(s_saved_password), "%s", pw);
    } else {
        /* Preserve saving if the OS cannot create a worker. The span logger
         * still diagnoses any synchronous fallback delay. */
        if (password_persist(pw, time(NULL)))
            snprintf(s_saved_password, sizeof(s_saved_password), "%s", pw);
    }
    watchdog_span_end("password_submit", started);
    /* Keep it ready for the prefill path on the next password screen. */
    snprintf(s_loaded_password, sizeof(s_loaded_password), "%s", pw);
    s_password = s_loaded_password;
}

/* ---- Auto-prefill the password entry screen (Faxanadu-style) ----
 * On the "PASS WORD PLEASE" screen we "type" the saved password for the player
 * by driving the game's OWN entry path: set the grid cursor ($0321 row,$0322 col)
 * to each glyph (code = row*13+col) and press A for one frame. The game enters and
 * RENDERS each char exactly as if typed, so the password appears on screen; the
 * player just presses START to confirm (or backspaces to edit). Reuses the proven
 * entry logic — no buffer pokes, no rendering to replicate.
 *
 * Entry screen is identified by $1D==1 (menu/entry, not gameplay) && $1F==0x18. */
extern uint8_t g_controller1_buttons;

static int s_prefill_idx   = -1;   /* next char to type; -1 = idle/done */
static int s_prefill_press = 0;    /* 0 = press A this frame, 1 = release */
static int s_prefill_armed = 0;    /* armed once per entry-screen visit */

static void password_prefill_tick(void) {
    int on_entry = (g_ram[MET_GameMode] == 1 && g_ram[MET_TitleRoutine] == 0x18);
    if (!on_entry) { s_prefill_armed = 0; s_prefill_idx = -1; return; }
    if (!s_password || !s_password[0]) return;

    /* Arm once on arrival, only if the player hasn't started typing ($0320==0). */
    if (!s_prefill_armed) {
        s_prefill_armed = 1;
        s_prefill_idx = (g_ram[MET_PasswordCursor] == 0) ? 0 : -1;
        s_prefill_press = 0;
    }
    int len = (int)strlen(s_password);
    if (s_prefill_idx < 0 || s_prefill_idx >= len || s_prefill_idx >= MET_PW_LEN) {
        s_prefill_idx = -1;
        return;
    }

    /* Drive the game's own entry, synced to the display position $0320 so a
     * dropped/early press self-corrects (the first frames on the screen may not
     * accept input yet). Press A only when $0320 matches our index; advance only
     * once the entry actually registered ($0320 moved off our index). */
    if (s_prefill_press == 0) {
        if (g_ram[MET_PasswordCursor] != (uint8_t)s_prefill_idx) return;   /* wait for the buffer to catch up */
        int code = metroid_char_to_index(s_password[s_prefill_idx]);
        if (code < 0) { s_prefill_idx = -1; return; }
        g_ram[MET_InputRow]    = (uint8_t)(code / 13);   /* cursor row */
        g_ram[MET_InputColumn] = (uint8_t)(code % 13);   /* cursor col */
        g_controller1_buttons = 0x80;           /* press A (edge) */
        s_prefill_press = 1;
    } else {
        g_controller1_buttons = 0x00;           /* release so the next A is a fresh edge */
        s_prefill_press = 0;
        if (g_ram[MET_PasswordCursor] != (uint8_t)s_prefill_idx)   /* entry registered */
            s_prefill_idx++;
    }
}


static void power_on(void *ctx) {
    (void)ctx;met_cycle_init();metroid_ws_init();game_voxel_init();
    char exe[1024];get_exe_relative_path("MetroidNESRecomp.exe",exe,sizeof exe);keybinds_init_readonly(exe);
    if(cyc_host_saves_enabled() && !s_password_from_cli && password_save_read())s_password=s_loaded_password;
    atexit(password_writer_shutdown);
}
static void input(void *ctx,uint8_t buttons[2]) {
    (void)ctx;g_controller1_buttons=buttons[0];password_prefill_tick();buttons[0]=g_controller1_buttons;
}
static void frame_end(void *ctx) {
    (void)ctx;cyc_presentation_sync();metroid_ws_post_nmi(cyc_ring_frame);password_capture_tick(cyc_ring_frame);game_voxel_update();
}
static uint32_t s_picture[CYC_VIDEO_MAX_WIDTH*240];
static const uint32_t *present(void *ctx,int *w,int *h) {
    (void)ctx;cyc_presentation_sync();const uint32_t *native=cyc_render_present(w,h);
    memcpy(s_picture,native,(size_t)(*w)*(*h)*sizeof *s_picture);game_voxel_post_render(s_picture);return s_picture;
}
static void event(void *ctx,const void *ev,int player) {
    (void)ctx;cyc_presentation_event(ev,player);game_voxel_handle_event(ev);
}
static bool option(void *ctx,const char *name,const char *value) {
    (void)ctx;
    if(!strcmp(name,"--password")){
        size_t n=strlen(value);if(!n || n>24)return false;
        for(size_t i=0;i<n;i++)if(metroid_char_to_index(value[i])<0)return false;
        memcpy(s_loaded_password,value,n+1);s_password=s_loaded_password;s_password_from_cli=1;return true;
    }
    if(!strcmp(name,"--no-password-capture")){s_capture_enabled=0;return true;}
    if(!strcmp(name,"--widescreen")){
        NesAspectMode aspect;MetWsHud hud;if(!metroid_ws_parse_spec(value,&aspect,&hud))return false;
        metroid_ws_enable(aspect,hud);return true;
    }
    if(!strcmp(name,"--widescreen-pc")){
        int actors=0,sprites=0,smooth=0;char buf[128];if(strlen(value)>=sizeof buf)return false;strcpy(buf,value);
        if(!strcmp(value,"off")){met_actors_configure(0,0,0);return true;}
        if(!value[0] || value[0]==',' || value[strlen(value)-1]==',' || strstr(value,",,"))return false;
        char *tok=strtok(buf,",");if(!tok)return false;
        while(tok){if(!strcmp(tok,"actors"))actors=1;else if(!strcmp(tok,"sprites"))sprites=1;else if(!strcmp(tok,"smooth"))smooth=1;else return false;tok=strtok(NULL,",");}
        met_actors_configure(actors,sprites,smooth);return true;
    }
    if(!strcmp(name,"--voxel-first-person")){metroid_ws_disable();game_voxel_configure_mod(1,15,0,0,100,115);game_voxel_set_mod_enabled(1);return true;}
    return false;
}
static void tcp_password(int id,const char *line) {
    (void)line;char pw[25],quoted[64],fields[128];if(!metroid_generate_password(pw,sizeof pw)){cyc_tcp_err(id,"encoder failed");return;}
    cyc_tcp_quote(pw,quoted,sizeof quoted);snprintf(fields,sizeof fields,"\"password\":%s",quoted);cyc_tcp_ok(id,fields);
}
static void tcp_save(int id,const char *line) {
    (void)line;if(!cyc_host_saves_enabled()){cyc_tcp_err(id,"--no-save is active");return;}
    char pw[25];if(!metroid_generate_password(pw,sizeof pw)){cyc_tcp_err(id,"password save failed");return;}
    if(password_writer_failed())s_saved_password[0]=0;
    if(strcmp(pw,s_saved_password)){
        if(password_writer_start(password_persist))password_writer_submit(pw,time(NULL));
        else if(!password_persist(pw,time(NULL))){cyc_tcp_err(id,"password save failed");return;}
        snprintf(s_saved_password,sizeof s_saved_password,"%s",pw);
    }
    snprintf(s_loaded_password,sizeof s_loaded_password,"%s",pw);s_password=s_loaded_password;cyc_tcp_ok(id,NULL);
}
static void tcp_actors(int id,const char *line) {
    (void)line;char actors[32768],fields[33000];if(!met_actors_debug_json(actors,sizeof actors)){cyc_tcp_err(id,"actor output overflow");return;}
    snprintf(fields,sizeof fields,"\"actors\":%s",actors);cyc_tcp_ok(id,fields);
}
static void tcp_setup(void *ctx) {
    (void)ctx;cyc_tcp_register("password_now","capture current password without changing machine state",tcp_password);
    cyc_tcp_register("password_save","queue password and timestamped history",tcp_save);cyc_tcp_register("metroid_actors","viewport actor residency",tcp_actors);
}
static const CycHostOption options[]={
    {"--password",true,"Metroid password (1..24 characters)"},
    {"--no-password-capture",false,"Disable automatic password capture"},
    {"--widescreen",true,"fit|16:9|21:9|32:9|off[,edges|center]"},
    {"--widescreen-pc",true,"actors,sprites,smooth (individual opt-ins) or off"},
    {"--voxel-first-person",false,"First-person voxel presentation"}
};
const CycHostExtras *cyc_host_extras(void) {
    static const CycHostExtras extras={.present=present,.power_on=power_on,.frame_end=frame_end,
        .options=options,.option_count=sizeof options/sizeof options[0],.option=option,.tcp_setup=tcp_setup,.input=input,.event=event};return &extras;
}
