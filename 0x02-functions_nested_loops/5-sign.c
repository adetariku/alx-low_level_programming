#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * Return : 1 if number is greater than zero, 0 is zero or -1 if negative.
 * @n : a character
*/
int print_sign(int n)
{
	if (n > '0')
	{	
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar ('0');
		return (0);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
		return (100);
	
}
