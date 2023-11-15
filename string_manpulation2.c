#include "main.h"

/**
 * _isCommand - check is command exist or not.
 * @str1: first string
 * @str2: exit string
 * Return: 1 if yes 0 if no.
*/

int _isCommand(char *str1, char *str2)
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

/**
 * string_length - returns the length of a string
 * @str: the string whose length to check
 *
 * Return: integer length of string
*/

int string_length(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
