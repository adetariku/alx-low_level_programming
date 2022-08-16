#include "lists.h"

/**
 * add_nodeint - a function with two arguments
 * @head: double pointer to linked list
 * @n: value data of new node
 *
 * Return: address of new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
