#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type
 * @d: pointer de dog
 * @name: type char
 * @age: type int
 * @owner: type char
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{	
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
