#ifndef SIMPLESHELL
#define SIMPLESHELL

#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

int _putchar(char c);
void create_argv(char *s, char **argv);
int _strcompr(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);
char *_strchr(char *s, char c);
int free_EOF(char *txt);
int free_txtNULL(char *txt);
int freeNpid(void);
void free_argv(char *av[]);
void print_number(int n);
void print_error(char **av, char *prss, int c, char *txt);
void superFree(char *txt, char **av);

#endif
