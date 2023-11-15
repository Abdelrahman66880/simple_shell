#include "main.h"

/**
 * custom_getenv - Retrieve value of specified environment variable.
 * @var_name: Name of the environment variable.
 * Return: result.
*/

char *custom_getenv(char *var_name)
{
int i = 0;
char *result;

while (environ[i] != NULL)
{
result = strtok(environ[i], "=");
if (strcmp(result, var_name) == 0)
{
result = strtok(NULL, "\0");
break;
}
i++;
}
return (result);
}

/**
 * custom_path - Search for command in each environment variable.
 * @arguments: Array of arguments are the command to search for.
 * Return: 0 on success, -1 on failure.
 */

int custom_path(char **arguments)
{
char *path = NULL;
char *full_path = NULL;
struct stat st;
unsigned int i = 0;

path = custom_getenv("PATH");
path = strtok(path, ":");
i = 0;

while (path != NULL)
{
full_path = custom_find_path(path, arguments[0]);
if (stat(full_path, &st) == 0)
{
arguments[0] = strdup(full_path);
break;
}
path = strtok(NULL, ":");
i++;
}
free(full_path);
if (execve(arguments[0], arguments, NULL) == -1)
{
return (-1);
}
return (0);
}
