#include "shell.h"

/**
 * shell_tokenize - a function to tkenize input command
 * @cmd: input
 * @argc: arguments
 * @i: count
 * Return: nothing
 */
void shell_tokenize(char *cmd, char **argc, int *i)
{
	char *tkn = strtok(cmd, " \t\n");
	*i = 0;

	while (tkn)
	{
		argc[*i] =  tkn;
		(*i)++;
		tkn = strtok(NULL, "\t\n");
	}
	argc[*i] = NULL;
}
