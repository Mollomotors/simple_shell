#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>


#define USE_GETLINE 0
#define USE_STRTOK 0

// functions from sh_atoi
int interactive(info_t *info);
int _isalpha(int c);
int is_delim(char c, char *delim);
int _atoi(char *s);

// functions from sh_builtin1
int _myexit(info_t *info);
int _mycd(info_t *info);
int _myhelp(info_t *info);
int _myhistory(info_t *info);

// functions from sh_builtin2
int unset_alias(info_t *info, char *str);
int set_alias(info_t *info, char *str);
int print_alias(list_t *node);
int _myalias(info_t *info);

// functions from sh_memory
int bfree(void **ptr);
  
// fnction from getline (exercise 6)
ssize_t get_input(info_t *);
int _getline(info_t *info, char **ptr, size_t *length);
void sigintHandler(__attribute__((unused))int sig_num);

//function from excerise 8
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strchr(char *s, char c);

#endif
