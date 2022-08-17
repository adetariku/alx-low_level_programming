#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_ptr_to_loop_node - finds a loop in a linked list
 * @head: a pointer to the first node
 *
 * Return: address of the loop node, NULL if no loop
 */
listint_t *get_ptr_to_loop_node(listint_t *head)
{
	listint_t *begin, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (begin = head; begin != end; begin = begin->next)
			if (begin == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a linked list
 *
 * @head: head of list to print
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int flag;
	listint_t *nodeLoop;

	nodeLoop = get_ptr_to_loop_node((listint_t *) head);

	for (count = 0, flag = 1; (head != nodeLoop || flag) && head != NULL; count++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == nodeLoop)
			flag = 0;
		head = head->next;
	}

	if (nodeLoop != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (count);
}

