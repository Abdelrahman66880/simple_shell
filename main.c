#include "main.h"

/**
 * main - show a prompt then wait for the user to write a command
 * @ac: is the number of argument
 * @av: is the array of argument
 *
 * Return: 0
*/

int main(__attribute__((unused)) int ac, char **av)
{
char *input = NULL;
char **splits = NULL;
pid_t child;

signal(SIGINT, SIG_IGN);

while (1)
{
if (isatty(STDIN_FILENO))
{
display_prompt();
}

input = get_input();
splits = split_user_input(input);

if (strcmp(splits[0], "env") == 0)
{
print_environment();
}
else if (strcmp(splits[0], "exit") == 0)
{
free(input);
free(splits);
exit(EXIT_SUCCESS);
}
else
{
child = fork();

if (execute_process(child, input, splits) == -1)
{
check_input(&input, av[0]);
free(splits);
exit(EXIT_FAILURE);
}
}
free(input);
}
return (0);
}
