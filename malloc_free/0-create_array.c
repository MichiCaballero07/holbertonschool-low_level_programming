#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - unsigned int size, char c
 * @c: c
 * @size: size of char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *mc;

	if (size <= 0)
		return (0);
	mc = malloc(size);
	if (mc == 0)
		return (0);
	for (a = 0; a < size; a++)
		mc[a] = c;
	return (mc);

}
