#ifndef SHELL_H
#define SHELL_H

#define MAX_COMMAND_LENGTH 128
#define MAX_ARGS 10
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

void shell_display(void);
void shell_print(const char *c);
void read_shell(char *cmd, size_t size);
void shell_execute(const char *cmd, char *args[]);

#endif
