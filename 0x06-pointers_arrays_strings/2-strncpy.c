#include "main.h"

/**
 * _strncpy - ee the Description
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Description : copies n bytes of the src to dest buffer
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	/**
	 *
	 */
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	/**
	 * when the above loop finishes i is less than or equal to n.
	 * they are equal if n characters of src are copied to dest.
	 * In anycase the we have to put a terminating char on 
	 * the remaining buffer locations of the dest buffer.
	 */
	while (i <= n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
