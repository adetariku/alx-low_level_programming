#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a node to a linked list
 * @head: double pointer to linked list
 * @str: string pointer
 *
 * Return: the address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int counter = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	while (str[counter] != '\0')
		counter++;
	temp->len = counter;
	temp->next = *head;
	*head = temp;
	return (temp);
}
