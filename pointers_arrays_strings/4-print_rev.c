#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int e, m;

	for (e = 0; s[e] != '\0'; e++)
	{
	}
	for (m = e; s[m] >= 0;  m--)
		_putchar(s[m]);
	_putchar('\n');
}
