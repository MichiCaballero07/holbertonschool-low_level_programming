# include <stdio.h>
# include <stdlib.h>
/**
 * main - function
 * description - alphabate invers
 * Return: 0 (success);
 */
int main(void)
{
	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)
	putchar(abc);
	putchar('\n');
	return (0);
}
