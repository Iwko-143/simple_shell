#include "shell.h"
/**
 * shell_print - writes character to standard output
 * @c: character to print
 * Return: nothing
 */
void shell_print(const char *c)
{
	write(STDOUT_FILENO, c, strlen(c));
}
