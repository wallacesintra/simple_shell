#include "shell.h"

/**
 * _strlength - function that return the length
 * of a string
 * @str: string
 *
 * return: length of a string
 */

size_t _strlength(char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
