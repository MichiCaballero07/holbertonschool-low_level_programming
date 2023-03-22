#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - that prints a name
 * @name: type char
 * @f: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);

}
