#include "main.h"

/**
 * print_binary - prints a binary num
 * @n: long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int index;
	int value = 0;

	if (n == 0)
		_putchar('0');
	for (index = 1UL << 63; index > 0; index >>= 1)
	{
		if (n & index)
		{
			_putchar('1');
			value = 1;
		}
		else if (value)
			_putchar('0');

	}
}
