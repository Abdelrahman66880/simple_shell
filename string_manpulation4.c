#include "main.h"

/**
 * str_dup - duplicates a string
 * @input: the string to duplicate
 *
 * Return: pointer to the duplicated string
*/

char *str_dup(char *input)
{
size_t len = strlen(input);
char *duplicate = malloc((len + 1) * sizeof(char));

if (duplicate == NULL)
{
perror("Memory allocation error");
exit(EXIT_FAILURE);
}
_stringcpy(duplicate, input);
return (duplicate);
}
