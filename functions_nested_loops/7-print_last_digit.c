# include "main.h"
/**
 * print_last_digit -  that prints the last digit of a number
 * @p:the last digit
 * Return: The value of the last digit.
 */
int print_last_digit(int p)
{
	int last_number;

	last_number = p % 10;
	if (p < 0)
		 last_number *= -1;
	_putchar(last_number + '0');
	return (last_number);

}
