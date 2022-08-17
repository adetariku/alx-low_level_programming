#include "lists.h"

/**
 * reverse_listint - see the description
 * @head: pointer to the head pointer
 *
 * Description: reverses a linked list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	prev = *head;
	next = prev->next;
	*head = next->next;

	prev->next = NULL;

	while ((*head)->next != NULL)
	{
		next->next = prev;
		prev = next;
		next = (*head);
		*head = (*head)->next;
	}

	(*head)->next = next;
	next->next = prev;
	return (*head);
}
