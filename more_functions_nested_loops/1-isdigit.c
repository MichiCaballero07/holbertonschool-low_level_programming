# include <stdio.h>
# include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: is un digit
 * Return: always
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
