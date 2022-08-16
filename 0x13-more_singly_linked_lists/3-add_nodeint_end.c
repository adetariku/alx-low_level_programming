#include "lists.h"

/**
 * add_nodeint_end - a function with two arguments
 * @head: double pointer to first linked list
 * @n: integer value of data in node
 *
 * Return: the address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
