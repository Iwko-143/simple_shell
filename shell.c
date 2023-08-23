#include "shell.h"

/**
 * main - input
 * Return: always 0
 */
int main(void)
{
	char cmd[MAX_COMMAND_LENGTH];
	char *args[MAX_ARGS + 1];

	while (1)
	{
		shell_display();
		read_shell(cmd, sizeof(cmd));
		if (strcmp(args[0], "exit") == 0)
		{
			exit(0);
		}
		shell_execute(cmd, args);
	}
	return (0);
}
