#include "main.h"

/**
 * execute_process - function that execute and check the prosecc
 * @child_pid: child id
 * @input_line: buffer of line
 * @token_array: pointer to array to tokenize lines
 *
 * Return: 0
*/

int execute_process(pid_t child_pid, char *input_line, char **token_array)
{
int errors = 1;
if (child_pid == -1)
{
perror("failed in creating process");
return (1);
}
if (child_pid == 0)
{
token_array = split_user_input(input_line);

if (custom_path(token_array) == -1)
{
check_input(&input_line, token_array[0]);
free(token_array);
exit(EXIT_FAILURE);
}
else
{
errors++;
}
}
else
{
wait(NULL);
}

free(token_array);
return (0);
}

/**
 * check_input - function that prints error message
 * @input_line: buffer of line
 * @program_name: name of program
 *
 * Return: void
*/

void check_input(char **input_line, char *program_name)
{
write(2, program_name, strlen(program_name));
write(2, ": ", 2);
write(2, *input_line, strlen(*input_line));
write(2, ": it is not found\n", 18);
}
