#include "lists.h"

/**
 * pop_listint - pop_listint
 * @head: pointer to head pointer of list
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *test;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	test = *head;
	*head = (*head)->next;
	free(test);

	return (data);
}
