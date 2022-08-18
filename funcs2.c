#include "main.h"

/**
 * print_num - prints an integer
 * @n: how much the digits are
 * Retuen: nothing
 */
void print_num(int n)
{
	int cont;
	int tmp;

	if (n < 0)
	{
		_putchar('-');
		tmp = n ;
		cont = -1;
		while (tmp < -9)
		{
			tmp /= 10;
			cont *= 10;
		}
		while (cont <= -1)
		{
			_putchar((n / cont) + '0');
			n %= cont;
			cont /= 10;
		}
	}
	else
	{
		tmp = n;
		cont = 1;
		while (tmp > 9)
		{
			tmp /= 10;
			cont *= 10;
		}
		while (cont >= 1)
		{
			_putchar((n / cont) + '0');
			n %= cont;
			cont /= 10;
		}
	}
}

/**
 * super_free - frees NewPID
 * @txt: file to free
 * @av: argument list
 * Return: 0 on success
 */
void super_free(char *txt, char **av)
{
	free(txt);
	free_argv(av);
}


