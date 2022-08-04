#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * op_c - Print character .
 * @form: input parameter
 *
 * Return: Nothing.
 */

void op_c(va_list form)
{
	printf("%c", va_arg(form, int));
}
/**
 * op_i - Print Integer
 * @form: input parameter
 *
 * Return: void.
 */

void op_i(va_list form)
{
	printf("%i", va_arg(form, int));
}
/**
 * op_f - print FLoat numbers
 * @form: parameter
 *
 * Return: void.
 */

void op_f(va_list form)
{
	printf("%f", va_arg(form, double));
}
/**
 * op_s -print string
 * @form: param
 *
 * Return: void.
 */

void op_s(va_list form)
{
	char *ptrstr;

	ptrstr = va_arg(form, char *);
	if (ptrstr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptrstr);
}

/**
 * print_all - check the code
 * @format: number of arguments
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{

	va_list a;
	unsigned int i, j;
	char *separator = "";

	f ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		};

	va_start(a, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				ops[j].f(a);
				break;
			}
			j++;
		}
	i++;
	}

	printf("\n");
	va_end(a);
}
