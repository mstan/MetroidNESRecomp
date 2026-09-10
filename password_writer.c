/* Password file I/O must not hold up emulation/audio on a slow filesystem. */
#include "password_writer.h"
#include <SDL.h>
#include <stdlib.h>
#include <string.h>

enum { QUEUE_CAP = 16, PASSWORD_BYTES = 25 };
typedef struct { char text[PASSWORD_BYTES]; time_t captured_at; } Job;
static Job s_jobs[QUEUE_CAP];
static unsigned s_head, s_count;
static int s_stopping;
static SDL_Thread *s_thread;
static SDL_mutex *s_lock;
static SDL_cond *s_ready;
static SDL_atomic_t s_failed;
static PasswordWriteFn s_write;

static int writer(void *unused) {
    (void)unused;
    for (;;) {
        SDL_LockMutex(s_lock);
        while (!s_count && !s_stopping) SDL_CondWait(s_ready, s_lock);
        if (!s_count && s_stopping) { SDL_UnlockMutex(s_lock); break; }
        Job job = s_jobs[s_head];
        s_head = (s_head + 1) % QUEUE_CAP;
        s_count--;
        SDL_UnlockMutex(s_lock);
        /* Never hold the producer lock during file I/O. */
        if (!s_write(job.text, job.captured_at)) SDL_AtomicSet(&s_failed, 1);
    }
    return 0;
}

int password_writer_start(PasswordWriteFn write) {
    if (s_thread) return 1;
    s_head = s_count = 0;
    s_stopping = 0;
    s_write = write;
    SDL_AtomicSet(&s_failed, 0);
    s_lock = SDL_CreateMutex();
    s_ready = SDL_CreateCond();
    if (s_lock && s_ready) s_thread = SDL_CreateThread(writer, "metroid-password", NULL);
    if (!s_thread) {
        if (s_ready) SDL_DestroyCond(s_ready);
        if (s_lock) SDL_DestroyMutex(s_lock);
        s_ready = NULL; s_lock = NULL;
        return 0;
    }
    static int registered;
    if (!registered) { atexit(password_writer_shutdown); registered = 1; }
    return 1;
}

void password_writer_submit(const char *password, time_t captured_at) {
    SDL_LockMutex(s_lock);
    /* A stalled disk cannot grow memory without bound. If over 80 seconds of
     * normal captures accumulate, retain the newest progress in the last slot. */
    unsigned index = (s_head + s_count) % QUEUE_CAP;
    if (s_count == QUEUE_CAP) index = (s_head + s_count - 1) % QUEUE_CAP;
    else s_count++;
    SDL_strlcpy(s_jobs[index].text, password, sizeof s_jobs[index].text);
    s_jobs[index].captured_at = captured_at;
    SDL_CondSignal(s_ready);
    SDL_UnlockMutex(s_lock);
}

int password_writer_failed(void) { return SDL_AtomicSet(&s_failed, 0); }

void password_writer_shutdown(void) {
    if (!s_thread) return;
    SDL_LockMutex(s_lock);
    s_stopping = 1;
    SDL_CondSignal(s_ready);
    SDL_UnlockMutex(s_lock);
    SDL_WaitThread(s_thread, NULL);
    s_thread = NULL;
    SDL_DestroyCond(s_ready); s_ready = NULL;
    SDL_DestroyMutex(s_lock); s_lock = NULL;
}
