#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string in reverse order..
 * @s: pointer int type
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	
	 while (len >0)
	 {
		_putchar(*(--s));
               len--;
	 }		
	_putchar('\n');
}
