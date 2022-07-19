#include "main.h"

/**
 * _strstr - See the description
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Description : functions that locates a substring.
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int row = 0, col = 0;

	while (haystack[row])
	{
		while (needle[col] && (haystack[row] == needle[0]))
		{
			if (haystack[col + row] == needle[col])
				col++;
			else
				break;
		}
		if (needle[col])
		{
			row++;
			col = 0;
		}
		else
			return (haystack + row);
	}
	return (0);
}
