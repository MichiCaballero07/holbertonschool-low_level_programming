#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: string
 * Return: Always 0.
 */
void _puts(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; ++d)
		_putchar(str[d]);
	_putchar('\n');

}
