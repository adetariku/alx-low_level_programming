#include "main.h"
#include <stdlib.h>
/**
 * _puts - prints a string followed by a line
 * @str : input string
 *
 * Return : void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
