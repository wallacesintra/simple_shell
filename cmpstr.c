#include "shell.h"

/**
 * _stringcmp - function to compares two strings
 * @str1: string input.
 * @str2: string input.
 * Return: 0 if the strings are the same.
 */

int _stringcmp(char *str1, char *str2)
{
	int i = 0, r = 0;

	while (r == 0)
	{
		if ((*(str1 + i) == '\0') && (*(str2 + i) == '\0'))
			break;
		r = *(str1 + i) - *(str2 + i);
		i++;
	}

	return (r);
}
