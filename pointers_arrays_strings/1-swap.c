#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps
 * @a: variable
 * @b: variable
 *
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
