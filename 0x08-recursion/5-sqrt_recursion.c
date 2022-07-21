#include "main.h"
/**
 * square - checks if a number has a square
 * @i: counter
 * @n: input number n
 *
 * Return: -1 or factor
 */
int square(int n, int i)
{
	if (i > n)
	{
		return (-1);
	}
	if (n == i * i)
	{
		return (i);
	}
	return (square(n, i + 1));
}
/**
 * _sqrt_recursion - find a natural quare root
 * @n: the input number
 *
 * Return: -1 if n has no natural root, else the natural square root
 */
int _sqrt_recursion(int n)
{
	int counter = 1;

	return (square(n, counter));
}
