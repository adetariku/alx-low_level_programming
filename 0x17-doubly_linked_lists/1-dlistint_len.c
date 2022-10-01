#include "lists.h"

/**
 * dlistint_len - counts the # of nodes in a d-linked list
 * @h: ptr to the start of a d-linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
