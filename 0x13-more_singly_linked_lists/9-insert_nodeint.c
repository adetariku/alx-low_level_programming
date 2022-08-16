#include "lists.h"

/**
 * insert_nodeint_at_index -see the description
 * @head: pointer to head pointer
 * @ind: index of list
 * @d: data integer
 *
 * Description: inserts a new node at a given position
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int ind, int d)
{
	listint_t *test, *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	test = malloc(sizeof(listint_t));
	if (test == NULL)
		return (NULL);
	test->n = d;
	current = *head;

	if (ind == 0)
	{
		test->next = *head;
		*head = test;
		return (*head);
	}

	while (current != NULL)
	{
		if (count == ind - 1)
		{
			test->next = current->next;
			current->next = test;
		}
		count++;
		current = current->next;
	}
	if (ind > count)
		return (NULL);
	return (test);

}
