#include "main.h"

/**
 * flip_bits - count how many bits to flip
 * @n: one num
 *
 * @m: the other num
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int index = n ^ m;
	int count = 0;

	while (index)
	{
		count += index & 1;
		index >>= 1;
	}
	return (count);
}
