#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a character pointer using recursive function
 * @s: a character pointer
 *
 * Return : Nothing(void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
