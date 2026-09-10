/* Real SDL thread test: slow I/O cannot block submit; shutdown drains the
 * bounded queue, preserves immutable inputs/newest progress and reports errors. */
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include "password_writer.h"
#include <stdio.h>
#include <string.h>

static SDL_sem *entered, *release;
static char written[32][25];
static time_t captured[32];
static unsigned count;
static int persist(const char *pw, time_t when) {
    if (!strcmp(pw, "FAIL")) return 0;
    if (!count) {
        SDL_SemPost(entered);
        if (SDL_SemWaitTimeout(release, 5000) != 0) return 0;
    }
    if (count >= 32) return 0;
    SDL_strlcpy(written[count], pw, sizeof written[count]);
    captured[count++] = when;
    return 1;
}

int main(void) {
    entered = SDL_CreateSemaphore(0); release = SDL_CreateSemaphore(0);
    if (!entered || !release || !password_writer_start(persist)) return 1;
    password_writer_submit("first", 1000);
    if (SDL_SemWaitTimeout(entered, 5000) != 0) return 2;
    Uint64 start = SDL_GetPerformanceCounter();
    for (int i=1; i<=32; i++) {
        char pw[25]; snprintf(pw, sizeof pw, "capture-%02d", i);
        password_writer_submit(pw, 1000+i);
        memset(pw, 'X', sizeof pw);
    }
    double elapsed = (double)(SDL_GetPerformanceCounter()-start)/SDL_GetPerformanceFrequency();
    SDL_SemPost(release);
    password_writer_shutdown();
    if (elapsed > 1 || count != 17 || strcmp(written[0], "first") || captured[0] != 1000) return 3;
    for (int i=1; i<16; i++) {
        char expected[25]; snprintf(expected, sizeof expected, "capture-%02d", i);
        if (strcmp(written[i], expected) || captured[i] != 1000+i) return 4;
    }
    if (strcmp(written[16], "capture-32") || captured[16] != 1032) return 5;
    if (!password_writer_start(persist)) return 6;
    password_writer_submit("FAIL", 2000);
    password_writer_shutdown();
    if (!password_writer_failed() || password_writer_failed()) return 7;
    SDL_DestroySemaphore(entered); SDL_DestroySemaphore(release);
    printf("PASS: nonblocking submit (%.3f ms), immutable queue, overflow keeps newest, drain and failure latch\n", elapsed*1000);
    return 0;
}
