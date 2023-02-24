# include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *@n: number character
 * Return: 0.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			b = a;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
