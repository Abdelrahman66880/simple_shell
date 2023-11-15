#include "main.h"

/**
 * custom_find_path - Concatenate command with path list.
 *
 * @path_list: Colon-separated list of directories.
 * @command: Command to append in path_list.
 *
 * Return: new_path.
*/

char *custom_find_path(char *path_list, char *command)
{
int len1, len2, i = 0, b = 0;
char *new_path;

len1 = string_length(path_list);
len2 = string_length(command);
new_path = malloc((len1 + len2)+2);
while (path_list[i] != '\0')
{
new_path[i] = path_list[i];
i++;
}
new_path[i] = '/';
i++;

while (command[b] != '\0')
{
new_path[i] = command[b];
i++;
b++;
}

new_path[i + 1] = '\0';
return (new_path);
}
