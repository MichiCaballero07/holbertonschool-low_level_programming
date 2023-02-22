# include <stdio.h>
# include "main.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alpha.
 *
 */
void print_alphabet_x10(void)
{
	char beta;
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		for (beta = 'a'; beta <= 'z'; beta++)
			_putchar(beta);
    		_putchar('\n');
	}
}
