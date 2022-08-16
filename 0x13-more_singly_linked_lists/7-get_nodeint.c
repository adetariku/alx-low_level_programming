#include "lists.h"

/**
 * get_nodeint_at_index - see description
 * @head: pointer to first node of linked list
 * @index: nth node
 *
 * Description: returns the nth node of linked list
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int ind)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == ind)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
