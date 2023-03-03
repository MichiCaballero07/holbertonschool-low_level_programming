#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: string
 * @a: sring
 * Returin: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, dup;

	for (; i < n; i++)
	{
		n--;
		dup = a[i];
		a[i] = a[n];
		a[n] = dup;
	}
}
