#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to be used as a search key or reference
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int row,col;

	for (row = 0; s[row]; row++)
	{
		for (col = 0; accept[col]; col++)
		{
			if (s[row] == accept[col])
				break;
		}
		if (accept[col])
			return (s + row);
	}
	return (0);
}

