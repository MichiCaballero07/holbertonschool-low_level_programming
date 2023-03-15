#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * malloc_checked - function should cause normal process termination with
 * a status value of 98
 * @b: bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
