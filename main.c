#include "shell.h"

/**
 * main - the main function for the simple shell
 *
 * Return: 0 on success
 */
int main(void)
{
	char *input;
	size_t buffsize = 1024;
	const char *delim = " ";

	while (1)
	{
		readInput(&input, &buffsize);

		if (_stringcmp(input, "exit") == 0)
		{
			free(input);
			exit(0);
		}

		if (_stringcmp(input, "env") == 0)
		{
			printEnvironment();
			free(input);
			continue;
		}

		process_input(input, delim);
		free(input);
	}
	return (0);
}
