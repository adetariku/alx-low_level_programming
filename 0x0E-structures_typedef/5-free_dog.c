#include <stdio.h>
/**
 * free_dog - free memory location
 * @dog: structure of dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d !=NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}


}
