#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: character c or Null
 */
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
		{
		return (s + m);
		}
	}
	return (NULL);
}
