#include "main.h"

/**
 * concatenate_strings - concatane strings.
 * @str1: string.
 * @str2: second string.
 * Return: strings.
*/

char *concatenate_strings(char *str1, char *str2)
{
char *result;
int len_str1, len_str2, j, i, e;

if (str1 == NULL)
str1 = "";

if (str2 == NULL)
str2 = "";

len_str1 = string_length(str1);
len_str2 = string_length(str2);

result = malloc(((len_str1)+(len_str2)+1) * sizeof(char));

if (result == NULL)
return (NULL);

for (j = 0; j < len_str1; j++)
{
result[j] = str1[j];
}

for (i = len_str1, e = 0; e <= len_str2; i++, e++)
{
result[i] = str2[e];
}
return (result);
}

/**
 * _stringcpy - copies a string
 * @destin: the destination
 * @sourc: the source
 *
 * Return: the pointer to destination
*/

char *_stringcpy(char *destin, const char *sourc)
{
int index = 0;

if (destin == sourc || sourc == NULL)
return (destin);
while (sourc[index])
{
destin[index] = sourc[index];
index++;
}
destin[index] = '\0';
return (destin);
}
