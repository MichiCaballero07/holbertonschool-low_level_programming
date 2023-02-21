# include <stdio.h>
# include <stdlib.h>
/**
 * main - function
 * description - the alphabet Mm
 * Return: 0 (success);
 */

	int main(void)
{
	char alfa;

	for (alfa = 'a'; alfa <= 'z'; alfa++)
	putchar(alfa);
	for (alfa = 'A'; alfa <= 'Z'; alfa++)
	putchar(alfa);
	putchar('\n');
	return (0);
}
