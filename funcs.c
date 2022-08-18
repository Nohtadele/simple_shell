#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character to print
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - return length of the string
 * @s: a pointer to the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strchr - searches a string for a character
 * @s: The string to search to
 * @c: The character to search
 * Return: a pointer to the first occurence of the character
 * 	or Null if no match found
 */
char *_strchr(char *s, char c)
{
	char *tmp;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			tmp = &s[i];
			break;
		}
	}
	if (s[i] == c)
		return (tmp);
	return (0);
}

/**
 * create_argv - creates argv
 * @s: user input string
 * @av: argument list
 * Return: 0 on success
 */
void create_argv(char *s, char **av)
{
	char *p;
	int i = 0;

	s[_strlen(s) -1] = '\0';
	do {
		p = _strchr(s, ' ');
		if (p != NULL)
			p[0] = 0;
		av[i] = s;
		s = p + 1;
		i++;
	} while (p != NULL);
}

/**
 * print_error - prints error on stdin
 * @av: arguments list
 * @prss: process descriptor
 * @c: nth executing process
 * @txt: user input
 * Return: 0 on success
 */
void print_error(char **av, char prss, int c, char *txt)
{
	(void)txt;
	write(STDERR_FILENO, prss, _strlen(prss));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, av[0], _strlen(av[0]));
	write(STDERR_FILENO, ": not found\n", 12);
	exit(0);
}

