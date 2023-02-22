# include <stdio.h>
# include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n:print letter in number
 * Return: 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
