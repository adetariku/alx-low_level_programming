#include "main.h"

/**
 * _memcpy -see the description
 * @dest: destination buffer(pasting location)
 * @src: source buffer to copy(source to be copied)
 * @n: number of bytes to be copied
 *
 * Description : copies the memory locartions to a destination based on the values of the location content
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		*(dest + counter) = *(src + counter);
	}
	return (dest);
}
