#include "shell.h"
/**
 * shell_execute - a function to execute command
 * @cmd: command  to be executed
 * @args: array of arguments
 * Return: nothing
 */
void shell_execute(const char *cmd, char *args[])
{
	pid_t process_id = fork();
	int i = 0;
	char *token;

	if (process_id == -1)
	{
		shell_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (process_id == 0)
	{
		token = strtok((char *)cmd, " ");
		while (token)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;
		execvp(args[0], args);

		shell_print("Error executing command.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
