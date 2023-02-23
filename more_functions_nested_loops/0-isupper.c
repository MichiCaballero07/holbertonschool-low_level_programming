# include "main.h"
# include <stdio.h>
/**
 * _isupper -  function that checks for uppercase character.
 * @c: is a character
 * Return: always
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
