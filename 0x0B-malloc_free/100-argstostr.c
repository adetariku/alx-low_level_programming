#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - see the descruption
 * @ac: int input
 * @av: double pointer to arguments
 *
 * Description- concatenates all arguments of a string
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int index, col;
	char *pointer_to_str;
	int len = 0, p = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (index = 0; index < ac; index++)
	{
		for (col = 0; av[index][col]; col++)
			len++;
	}
	len += ac;
	pointer_to_str = malloc(sizeof(char) * len + 1);
	if (pointer_to_str == NULL)
		return (NULL);
	for (index = 0; index < ac; index++)
	{
		for (col = 0; av[index][col]; col++)
		{
			pointer_to_str[p] = av[index][col];
			p++;
		}
		if (pointer_to_str[p] == '\0')
		{
			pointer_to_str[p++] = '\n';
		}
	}
	return (pointer_to_str);
}
