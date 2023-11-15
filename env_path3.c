#include "main.h"

/**
 * print_environment - display the environment varibles.
 *
 * Return (void)
*/

void print_environment(void)
{
int i = 0;
while (environ[i] != NULL)
{
printf("%s\n", environ[i]);
i++;
}
}
