#pragma once
#include <time.h>

/* The callback runs on one I/O thread. It must not access guest state.
 * Inputs are immutable copies; shutdown drains accepted jobs before joining. */
typedef int (*PasswordWriteFn)(const char *password, time_t captured_at);
int password_writer_start(PasswordWriteFn write);
void password_writer_submit(const char *password, time_t captured_at);
int password_writer_failed(void); /* main-thread retry latch, cleared on read */
void password_writer_shutdown(void);
