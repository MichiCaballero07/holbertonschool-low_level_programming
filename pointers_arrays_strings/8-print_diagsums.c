#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: string
 * @size: diagonals of a square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sumf, sumj;

	sumf = sumj = 0;

	for (i = 0; i < (size * size); i += size + 1)
		sumf += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sumj += a[i];
	printf("%d, %d\n", sumf, sumj);
}
