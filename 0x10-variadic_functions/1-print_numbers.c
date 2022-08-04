#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code for Holberton School students.
 * @n: number of arguments
 * @separator: character separator of numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, int));
		if (n == count + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
