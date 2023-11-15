#include "main.h"

/**
 * split_user_input - divide the string into splits
 * @input: input from getline funtion
 *
 * Return: splits
*/

char **split_user_input(char *input)
{
int j = 0;
int i = 0;
char **splits;
char *split = str_dup(input);
char *tmpvar = split;

tmpvar = strtok(tmpvar, " \n\t");

while (tmpvar != NULL)
{
j++;
tmpvar = strtok(NULL, " \n\t");
}

splits = (char **)malloc((j + 1) * sizeof(char *));
if (!splits)
{
perror("Memory allocation error");
exit(EXIT_FAILURE);
}

split = strtok(split, " \n\t");
while (split != '\0')
{
splits[i] = str_dup(split);
i++;
split = strtok(NULL, " \n\t");
}
splits[j] = NULL;
free(split);
return (splits);
}
