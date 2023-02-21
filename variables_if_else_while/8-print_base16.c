# include <stdio.h>
# include <stdlib.h>
/**
 * main - function
 * description - Hexadecimal
 * Return: 0 (success);
 */

int main(void)
{
	int num;
	char hexa;

	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
	for (hexa = 'a'; hexa < 'f'; hexa++)
	putchar(hexa);
	putchar('\n');
	return (0);
}
