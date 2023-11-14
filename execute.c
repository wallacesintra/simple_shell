#include "shell.h"

/**
 * executeCommand- function create process, syscall
 * @tokens: tokens, arguments to the sys calls
 *
 * returns: void
 */

void executeCommand(char **tokens)
{
	if (execve(tokens[0], tokens, __environ) == -1)
	{
		perror(tokens[0]);
	}
	exit(1);
}
