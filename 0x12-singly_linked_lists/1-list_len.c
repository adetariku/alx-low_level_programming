#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: constant  list_t pointer
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
