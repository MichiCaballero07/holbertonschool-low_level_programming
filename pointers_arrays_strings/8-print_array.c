#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements
 * @a: string
 * @n: number of elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
