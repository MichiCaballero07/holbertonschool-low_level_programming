#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: board
 */
void print_chessboard(char (*a)[8])
{
	int i, e;

	i = e = 0;

	while (i < 8)
	{
		e = 0;
		while (e < 8)
		{
			_putchar(a[i][e]);
			e++;
		}
		_putchar('\n');
		i++;
	}
}
