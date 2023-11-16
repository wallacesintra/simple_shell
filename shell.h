#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define PATH_MAX 1024
extern char **environ;

void readInput(char **input, size_t *bufsize);
void executeCommand(char **tokens);
void printEnvironment(void);
void process_input(char *input, const char *delim);
int _strlength(char *str);
int _stringcmp(char *str1, char *str2);

#endif
