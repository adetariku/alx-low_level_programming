#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates an array of chars,initializes it with a char
 * @c: character to initialize the array
 * @size: the size of the array
 *
 * Return: a pointer to to start of the newly  created array
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int index;

	pointer = NULL;
	pointer = malloc(size * sizeof(unsigned int));
	for (index = 0; index < size; index++)
	{
		*(pointer + index) = c;
	}

	return (pointer);
}
