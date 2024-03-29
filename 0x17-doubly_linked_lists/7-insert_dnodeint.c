#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: double ptr to the start of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: ptr to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int indx;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (indx = 0; indx < idx - 1 && current != NULL; indx++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
