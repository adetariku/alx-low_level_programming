#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer to start of struct of linked list
 * @str: argument char type pointer
 *
 * Return: the address of a new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *current_position;
	int count = 0;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);

	if (str)
	{
		last_node->str = strdup(str);
		while (str[count] != '\0')
			count++;
		last_node->len = count;
	}
	else
	{
		last_node->str = NULL;
		last_node->len = 0;
	}
	last_node->next = NULL;
	if (*head)
	{
		current_position = *head;
		while (current_position->next != NULL)
			current_position = current_position->next;
		current_position->next = last_node;
	}
	else
		*head = last_node;
	return (last_node);
}
