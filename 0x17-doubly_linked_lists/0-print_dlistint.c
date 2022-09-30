#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: a ptr to the start of a d linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
