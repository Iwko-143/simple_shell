#include "shell.h"

/**
 * main - inpu 
 * Return: always 0
 */
int main(void)
{
	char cmd[128];

	while (1)
	{
		shell_display();
		read_shell(cmd, sizeof(cmd));
		shell_execute(cmd);
	}
	return 0;
}
