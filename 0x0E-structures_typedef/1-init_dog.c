#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type dog
 * @d : an instance of type dog
 * @name: a type of character
 * @age : age value
 * @owner : owner name
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
