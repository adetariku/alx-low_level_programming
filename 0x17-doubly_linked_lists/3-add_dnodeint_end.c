#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a  inked list
 * @head: double pointer to a linked list
 * @n: value to add to new node
 *
 * Return: ptr to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
