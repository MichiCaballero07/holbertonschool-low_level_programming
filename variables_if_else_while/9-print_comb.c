# include <stdio.h>
# include <stdlib.h>
/**
 * main - function
 * description - combination for success
 * Return: 0 (success);
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	putchar(n + '0');
	if (n < 9)
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
