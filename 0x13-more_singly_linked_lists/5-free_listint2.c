#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: pointer to head pointer of list
 *
 * Return: na
 */
void free_listint2(listint_t **head)
{
	listint_t *iterate;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		iterate = (*head)->next;
		free(*head);
		*head = iterate;
	}
	*head = NULL;
}
