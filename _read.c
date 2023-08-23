#include "shell.h"
/**
 * read_shell - function to read the input
 * @cmd: input command
 * @size: size of the input command
 * Return: nothing
 */
void read_shell(char *cmd, size_t size)
{
	size_t s = size;

	s = read(STDIN_FILENO, cmd, sizeof(cmd));

	if (s <= 0)
	{
		shell_print("\n");
	}
	cmd[strcspn(cmd, "\n")] = '\0';
}
