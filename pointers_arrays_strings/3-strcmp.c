#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: string
 * @s2: string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
