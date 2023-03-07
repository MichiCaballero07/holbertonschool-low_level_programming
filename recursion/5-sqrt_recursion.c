#include <stdio.h>
#include "main.h"
/**
 * chek - the input number from n to the base
 * @n: number is squared and compared against bas
 * @bas: number to chek
 * Return: natural square root of number bas
 */
int chek(int n, int bas)
{
	if (n * n == bas)
		return (n);
	if (n * n > bas)
		return (-1);
	return (chek(n + 1, bas));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (chek(1, n));
}
