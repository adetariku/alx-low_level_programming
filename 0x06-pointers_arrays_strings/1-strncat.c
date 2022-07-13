#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: destination string
 * @src: string to be appended
 * @n: largest number of bytes to append
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	/**
	 * Iterate to the end of the destination string
	 */
	while (*(dest + i))
	{
		i++;
	}
	/**
	 * Now i is incremented to the end of the dest string. But j=0
	 * j used as a counter for the src elements. increment the
	 * pointer j to a value less than or equal to n. If src
	 * has more than n elements then j will be incremented
	 * utill it reaches n. In general j goes 0 to  n-1;
	 * (j < =n-1 <n
	 */
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
