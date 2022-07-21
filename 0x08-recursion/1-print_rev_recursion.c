#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - see the description.
 * @s : a character pointer
 *
 *  Description : Prints a string (character pointer) in a reverese order
 *  Return : void (Nothing)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
