#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 *
 * @str: string
 *
 * Return: NULL if str equal to NULL else returns a pointer
 * to a new string which is a duplicate of the string str.
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *duplicate;

	/* Returns NULL if str = NULL */
	if (str == NULL)
		return (NULL);

	/* We get the length of the chain str */
	while (str[len])
		len++;

	/* We assign the amount of memory space that we are going to use */
	duplicate = malloc((len + 1) * sizeof(char));

	/* Returns NULL if insufficient memory was available */
	if (duplicate == NULL)
		return (NULL);

	/*
	 * duplicate the content of string 'str' within the 'duplicate'
	 * pointer variable.
	 */
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
