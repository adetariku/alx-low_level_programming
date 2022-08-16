#include "lists.h"

/**
 * listint_len - function to return number of elements in a list
 * @h: a pointer to a struct of linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int number_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);
}
