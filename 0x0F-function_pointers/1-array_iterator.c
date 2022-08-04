#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function with 3 arguments
 * @array: pointer to int array
 * @size: size_t
 * @action: a pointer to function
 *
 * Description: executes a function on each array element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
