#include "shell.h"

/**
 * _strlength-function that return the length
 * of a string
 * @str: string
 *
 * Return: no. of characters
 */

int _strlength(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
