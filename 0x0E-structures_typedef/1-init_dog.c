#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer
 * @name: pointer to a string name
 * @age: floating number data type
 * @owner: pointer to string owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(*d).owner = owner;
		d->age = age;
	}
}
