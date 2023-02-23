# include "main.h"
# include <stdio.h>
/**
 * print_last_digit -  that prints the last digit of a number
 * @p:the last digit
 * Return: The value of the last digit.
 */
int print_last_digit(int p)
{
	char last_number;

	if (p < 0)
		p *= -1;
	last_number = p % 10;
	_putchar(last_number + '0');
	return (p % 10);

}
