#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters
 *
 * @a: string
 * Return: 0
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		a[i] -= 32;
	}
	return (a);
}
