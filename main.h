#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <string.h>

extern char **environ;

#define MAX_INPUT_LENGTH 1024

char *get_input(void);
void display_prompt();
int start_with_slash(char *command);
int _isExit(char *str1, char *str2);
int _isCommand(char *str1, char *str2);
int string_length(char *str);
char *concatenate_strings(char *str1, char *str2);
char *_stringcpy(char *destination, const char *source);
char *str_dup(char *input);
char **split_user_input(char *input);
int execute_process(pid_t child_pid, char *input_line, char **token_array);
void check_input(char **input_line, char *program_name);
char *custom_find_path(char *path_list, char *command);
char *custom_getenv(char *var_name);
int custom_path(char **arguments);



#endif /*MAIN_H*/
