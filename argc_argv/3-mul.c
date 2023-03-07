#include <stdio.h>
#include "main.h"

/**
 * main - function to print multiplication result
 * @argc: number of arguments
 * @argv: arguments supplied
 * Return: always 1 if less than two arg var supplied otherwise 0.
 */
int main(int argc, char **argv)
	{

	 int total;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	total = (int) *argv[1] * (int) *argv[2];

	printf("%d\n", total);

	return (0);

	}
