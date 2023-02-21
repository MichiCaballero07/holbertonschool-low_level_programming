# include <stdio.h>
# include <stdlib.h>
/**
 * main - function
 * description - print alphabet
 * Return: 0 (success);
 */

int main(void)
{
	char alfa = 'a';

	for (alfa = 'a'; alfa <= 'z'; alfa++)
	if (alfa != 'e' && alfa != 'q')
	putchar(alfa);
	putchar('\n');
	return (0);
}
