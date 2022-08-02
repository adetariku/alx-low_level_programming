#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - creates a new dog
 * @name: char type pointer
 * @age: age of float type
 * @owner: char type pointer
 *
 * Description: creates a new dog
 * Return: NULL if fail or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer_to_new_dog;

	pointer_to_new_dog = malloc(sizeof(dog_t));
	if (pointer_to_new_dog == NULL)
		return (NULL);
	pointer_to_new_dog->name = _strdup(name);
	if (!pointer_to_new_dog->name)
	{
		free(pointer_to_new_dog);
		return (NULL);
	}
	pointer_to_new_dog->age = age;
	pointer_to_new_dog->owner = _strdup(owner);
	if (!pointer_to_new_dog->owner)
	{
		free(pointer_to_new_dog->name);
		free(pointer_to_new_dog);
		return (NULL);
	}

	return (pointer_to_new_dog);

}

/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
