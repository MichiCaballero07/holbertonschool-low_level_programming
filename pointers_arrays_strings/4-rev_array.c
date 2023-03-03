#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: string
 * @a: string
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	n -= 1;
	for (; n >= 0; n--)
	{
		printf("%d", a[n]);
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
