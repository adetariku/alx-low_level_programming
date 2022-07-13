#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_count, src_count;

	dest_count = 0;
	src_count = 0;
	/**
	 * find the last element of the dest string
	 */
	while (*(dest + dest_count))
	{
		dest_count++;
	}
	/**
	 * append the src contents to dest until terminating char is reached.
	 * That is until it is false
	 */
	while ((*(dest + dest_count) = *(src + src_count)))
	{
		dest_count++;
		src_count++;
	}
	return (dest);
}
