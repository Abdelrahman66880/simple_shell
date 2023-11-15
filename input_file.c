#include "main.h"

/**
 * get_input - read line from user input
 *
 * Return: line
*/

char *get_input(void)
{
char *input = NULL;
size_t buffer = 0;

if (getline(&input, &buffer, stdin) == -1)
{
if (feof(stdin))
{
free(input);
exit(EXIT_SUCCESS);
}
else
{
free(input);
perror("Error in reading line");
exit(EXIT_FAILURE);
}
}
return (input);
}
