#include "lists.h"

/**
 * find_listint_loop - see the description
 * @head: points to head of a list
 *
 * Description -finds a loop node in a list if any
 * Return: the address where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *left, *right;

	if (!head)
		return (NULL);
	left = head;
	right = head;
	while (right->next && right->next->next)
	{
		right = right->next->next;
		left = left->next;
		if (right == left)
		{
			left = head;
			while (left != right)
			{
				left = left->next;
				right = right->next;
			}
			return (right);
		}
	}
	return (NULL);
}
