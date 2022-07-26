#include <stdio.h>
#include <stdlib.h>
/**
 * str_len - finds the length of a string
 * @str: input string
 *
 * Return: unsigned integer
 */
int str_len(char *str)
{
	int index = 0;

	if (!str)
		return (0);
	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 * str_concat - appends s2 on s1
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: string or null
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len, i;
	char *pointer = NULL, *pointer2 = NULL;

	len = str_len(s1) + str_len(s2);
	if (len == 0)
		return (NULL);
	pointer = malloc((len + 1) * sizeof(char));
	if (!pointer)
		return (NULL);
	pointer2 = pointer;
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*pointer2++ = *(s1 + i);
		i++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		*pointer2++ = *(s2 + i);
		i++;
	}
	*pointer2 = '\0';
	return (pointer);
}
