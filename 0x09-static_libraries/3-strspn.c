#include "main.h"

/**
 * _strspn - see the description.
 * @s: string domain
 * @accept: string used a reference for search
 *
 * Description : gets the length of a prefix substring
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int row, col;

	for (row = 0; s[row]; row++)
	{
		for (col = 0; accept[col]; col++)
		{
			if (s[row] == accept[col])
				break;
		}
		if (!accept[col])
			break;
	}
	return (row);
}
