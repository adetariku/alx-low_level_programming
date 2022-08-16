#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - see description
 * @head: pointer to head pointer
 * @index: element index in a linked list
 *
 * Description: deletes a node at given index
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *c_next;
	unsigned int count = 0;

	current = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	if (index == 1)
	{
		current = (*head)->next;
		(*head)->next = current->next;
		free(current);
		return (1);
	}
	while (count < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		count++;
		current = current->next;
		c_next = current->next;
	}
	current->next = c_next->next;
	free(c_next);

	return (1);
}
