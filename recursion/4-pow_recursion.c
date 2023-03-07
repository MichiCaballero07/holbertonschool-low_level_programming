#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to the power
 * @x: value raised to the power of y
 * @y: power
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int m;

	if (y < 0)
	{
		m = -1;
	}
	else if (y == 0)
	{
		m = 1;
	}
	else
	{
		m = x * _pow_recursion(x, y - 1);
	}
	return (m);
}
