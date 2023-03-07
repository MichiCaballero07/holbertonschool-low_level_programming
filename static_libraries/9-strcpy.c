#include "main.h"
#include <stdio.h>

/**
 * _strcpy - unction that copies the string pointed
 * @src: this detin
 * @dest: coppy
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
