# include "main.h"
#include <stdio.h>
/**
 * print_to_98 - that prints all natural numbers from n to 98
 * @n: prints all natural numbers from
 * Return: always.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		printf("%d, ", n++);
		printf("%d\n", n);
	}
}
