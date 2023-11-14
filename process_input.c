#include "shell.h"

/**
 * process_input - tokenizes the input and executes the command
 * @input: the input string
 * @delim: the delimiter for tokenization
 */
void process_input(char *input, const char *delim)
{
	char *tokens[1024];
	int t_count = 0;
	pid_t child;

	tokens[t_count] = strtok(input, delim);

	while (tokens[t_count] != NULL)
	{
		t_count++;
		tokens[t_count] = strtok(NULL, delim);
	}

	child = fork();

	if (child == -1)
	{
		perror("failed");
		free(input);
		exit(1);
	}

	if (child == 0)
	{
		executeCommand(tokens);
	}
	else
	{
		int status;

		wait(&status);
	}
}
