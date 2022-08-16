#include "lists.h"

/**
 * print_listint - a function to print elements of a linked list
 * @h: pointer to struct 
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
