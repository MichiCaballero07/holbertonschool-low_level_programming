#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - that executes a function given as a parameter
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int m;
if (array != NULL)
{
if (size && action)
{
for (m = 0; m < size; m++)
{
action(array[m]);
}
}
}
}
