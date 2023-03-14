#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat -  that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		return ("");

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i <= len1 - 1; i++)
		concat[i] = s1[i];

	for (j = 0; j <= len2; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	return (concat);
}

