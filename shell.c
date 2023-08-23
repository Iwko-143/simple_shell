#include "shell.h"
/**
 * main - input
 *  Return: always 0
 */
int main(void)
{
	char cmd[128];
	char **en = environ;

	while (1)
	{
		shell_display();
		read_shell(cmd, sizeof(cmd));

		if (strcmp(cmd, "exit") == 0)
		{
			exit(0);
		}
		else if (strcmp(cmd, "env") == 0)
		{
			while (*en)
			{
				shell_print(*en);
				en++;
			}
		}
		else
		{
			shell_execute_tokenize(cmd);
		}
	}
	return (0);
}
