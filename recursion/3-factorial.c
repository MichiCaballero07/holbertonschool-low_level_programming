#include <stdio.h>
#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: factorial
 * Return: 0
 */
int factorial(int n)
{
	int m;

	if (n == 0)
	{
		m = 1;
	}
	else if (n < 0)
	{
		m = -1;
	}
	else
	{
		m = n * factorial(n - 1);
	}
	return (m);
}
