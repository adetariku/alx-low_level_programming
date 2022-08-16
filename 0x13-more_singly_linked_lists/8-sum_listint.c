#include "lists.h"

/**
 * sum_listint - see the description
 * @head: pointer to first node of linked list
 *
 * Description: returns the sum of all the data(n)
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
