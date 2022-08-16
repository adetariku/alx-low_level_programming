#include "lists.h"

/**
 * free_listint - a function to free a list
 * @head: pointer to node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *iterate;

	while (head)
	{
		iterate = head->next;
		free(head);
		head = iterate;
	}
}
