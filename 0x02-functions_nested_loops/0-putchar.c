#include "main.h"
/**
 * main -prints the string putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char message[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{

		_putchar(message[i]);
	}

	_putchar('\n');

	return (0);


}
