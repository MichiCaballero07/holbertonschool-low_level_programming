#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k == 0 || k % 2 == 0)
		{
			_putchar(str[k]);
	}
	}
	_putchar('\n');



}
