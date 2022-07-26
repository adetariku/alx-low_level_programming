#include <stdlib.h>

/**
 * _strdup - duplicates a string and returns a pointer to the newly
 * allocated array
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int length = 0;
	char *pointer = NULL, *pointer2 = NULL;

	if (!str)
		return (NULL);
	pointer = str;
	while (*pointer++ != '\0')
		length++;
	pointer2 = malloc(sizeof(char) * (length + 1));
	if (!pointer2)
		return (NULL);

	pointer = pointer2;
	while (*str != '\0')
		*pointer++ = *str++;
	*pointer = '\0';
	return (pointer2);
}
