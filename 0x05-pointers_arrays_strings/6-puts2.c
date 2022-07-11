#include "main.h"
#include <stdio.h>
/**
 * puts2 - check the code for printing..
 * @str: pointer int type
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	for (i = 0; *str != '\0'; i+=2)
		_putchar(*(str + i));
	_putchar('\n');
}
