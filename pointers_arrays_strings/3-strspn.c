#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment initial
 * @accept: bytes
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, m, fun;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		fun = 0;
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (accept[m] == s[i])
			{
				count++;
				fun = 1;
			}
		}
		if (fun == 0)
		{
			return (count);
		}
	}
	return (count);
}
