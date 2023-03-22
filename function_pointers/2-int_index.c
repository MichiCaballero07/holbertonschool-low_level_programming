#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index -  that searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (!(array) || size <= 0 || !(cmp))
	{
		return (-1);
	}
	else
	{
	for (m = 0; m < size; m++)
	{
	if (cmp(array[m]))
	{
	return (m);
	};
	}
	return (-1);
	}
}
