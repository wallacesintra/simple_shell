#include "shell.h"

/**
 * printEnvironment- function prints environment variables
 *
 * return: void
 */

void printEnvironment(void)
{
	char **env;

	for (env = environ; *env != 0; env++)
	{
		write(STDOUT_FILENO, *env, _strlength(*env));
		write(STDOUT_FILENO, "\n", 1);
	}
}
