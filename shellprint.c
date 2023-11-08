#include "main.h"

/**
 * shellprint - print string
 *
 * return: void
 */

void shellprint(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}
