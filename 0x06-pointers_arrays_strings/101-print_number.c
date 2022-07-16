#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int p = 1;
	
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while(n/p > 1)
	{
		p*=10;
	}
	p/=10;
	while(n >= 1)
	{
		if (n/p == 0)
		{
			_putchar(n + '\0');
			n/=p;
		}
		else
		{
			_putchar(n/p + '\0');
			n -= (n/p) * p;
			p/=10;
		}
	}
	_putchar('\n');
}
