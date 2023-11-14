#include "shell.h"

/**
 * printEnvironment- function prints environment variables
 *
 * return: void
 */

void printEnvironment(void)
{
	char **env;

	for (env = __environ; *env != 0; env++)
	{
		write(STDOUT_FILENO, *env, strlen(*env));
		write(STDOUT_FILENO, "\n", 1);
	}
}
