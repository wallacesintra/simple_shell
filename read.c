#include "shell.h"

/**
 * readInput- function reads input from user
 * @input: string input
 * @bufsize: buffer size
 *
 * return: void
 */

void readInput(char **input, size_t *bufsize)
{
	ssize_t characters;

	write(STDOUT_FILENO, "($) ", 4);
	*input = (char *)malloc(*bufsize * sizeof(char));

	if (*input == NULL)
	{
		perror("Error: Allocation");
		exit(1);
	}
	characters = getline(input, bufsize, stdin);

	if ((*input)[characters - 1] == '\n')
	{
		(*input)[characters - 1] = '\0';
	}
}
