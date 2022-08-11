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
	temp->str = _strdup(str);
	while (str[count] != '\0')
		counter++;
	temp->len = counter;
	temp->next = *head;
	*head = temp;
	return (temp);
}
/**
 * *_strdup - string duplicate function
 * @str: string argument
 *
 * Return: a pointer
 */
char *_strdup(const char *str)
{
	int ind = 0, index;
	char *c_pointer;

	if (str == NULL)
		return (NULL);
	while (*(str + ind) != '\0')
	{
		ind++;
	}
	ptr = malloc(sizeof(char) * ind + 1);
	if (c_pointer == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		c_pointer[index] = str[index];
		index++;
	}
	c_pointer[index] = '\0';
	return (c_pointer);
}
