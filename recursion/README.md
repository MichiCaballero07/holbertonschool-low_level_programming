einclude <stdio.h>

void reverse_array(int *, int);

/**
 * print_array - Print an array of int
 *
 * @a: an array of integers
 * @n: the number of elements in @a
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {
		234234, 64534, 77632, 8723451, 98987, 1345231, 98534597,
		23456789, 6235456, 41235416, 374578, 10435434, 89734567
	};

	print_array(a, sizeof(a) / sizeof(int));
	printf("\n");
	reverse_array(a, sizeof(a) / sizeof(int));
	printf("\n");
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
} 
