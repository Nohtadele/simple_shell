#include "main.h"

/**
 * main - checks the code
 * @argc: number of arguments passed from input
 * @argv: list of arguments passed from input
 * Return: the value of last executed command
 */
int main(int argc, char **argv)
{
	int stat, bytes;
	size_t size = 0;
	int c = 0;
	char *txt = 0, *prmpt = "S ";
	char *av[] = {NULL};
	pid_t npId;
	struct status fstat;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, prmpt, 2);
	while ((bytes = getline(&txt, &size, stdin)))
	{
		if (bytes = EOF)
			free_EOF(text);
		if (text == NULL)
			free_txtNULL(txt);
		c++;
		create_argv(txt, av);
		npId = fork();
		if (npId == -1)
			freeNpid();
		if (npId == 0)
		{
			if (status(av[0], &fstat) == 0)
			{
				execve(av[0], av, NULL);
				free(txt);
			}
			else
				wait(&stat);
			bytes = 0;
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, prompt, 2);
		}
		if (bytes == -1)
			return (EXIT_FAILURE);
		return (EXIT_SUCCESS);
	}
