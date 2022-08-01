#include <stdio.h>
#include "dog.h"
/**
 * print_dog - check the code
 * @d: an instance of dog type
 *
 * Return : Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %0.6f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
