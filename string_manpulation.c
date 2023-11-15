#include "main.h"

/**
 * start_with_slash - identifies if first char is a slash.
 * @command: first string
 * Return: 1 if yes 0 if no.
*/

int start_with_slash(char *command)
{
if (command[0] == '/')
{
printf("%c\n", command[0]);
return (1);
}
return (0);
}

/**
 * _isExist - check if first char is a slash.
 * @str1: first string
 * @str2: exit string
 * Return: 1 if yes 0 if no.
*/

int _isExit(char *str1, char *str2)
{
int i = 0;
while (*str1 != '\0' && *str2 != '\0' && *str2 == *str1)
{
if (i == 3)
{
break;
}
i++;
str1++;
str2++;
}
return (*str1 - *str2);
}
