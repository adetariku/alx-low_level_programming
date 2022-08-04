#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - find the sum of variable input arguments.
 * @n: number of arguments
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int count;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
