#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: pointer to struct list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		_putchar(h->n);
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}
