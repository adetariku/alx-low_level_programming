#include "main.h"
#include <stdio.h>
/**
 * rev_string - print a string in reverse order..
 * @s: pointer int type
 *
 * Description - reverses a given string.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0;
	char *temp;


	while (*s != '\0')
	{
		s++;
		len++;
	}
	s = s - 1;
	while (len > 0)
	{
		temp = s;
		_putchar(*temp);
		s--;
		temp++;
		len--;
	}
	*s = *temp;
	_putchar('\n');
}
