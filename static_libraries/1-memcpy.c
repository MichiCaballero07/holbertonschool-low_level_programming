#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from memory area
 * @n: bytes from memory area
 * @src: pointers
 * @dest: to memory area
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
