#include <stdio.h>
#include "lists.h"
/**
*print_list - print string and length of string
*@h: pointer to first element
*
*Return: length of list
*/
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
			h = h->next;
			length++;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
