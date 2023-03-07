#include <stdio.h>
#include "main.h"
/**
  * chek - chek recursively the input from is_prime_number
  * @n: iterator
  * @bas: bas number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int chek(int n, int bas)
{
	if (bas % n == 0 || bas < 2)
		return (0);
	else if (n == bas - 1)
		return (1);
	else if (bas > n)
		return (chek(n + 1, bas));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
{
	return (chek(2, n));
}
