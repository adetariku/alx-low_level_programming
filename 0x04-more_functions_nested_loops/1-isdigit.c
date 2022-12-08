#include "main.h"
/**
 * _isdigit - prints if a character is a digit or not.
 * @c: - input character
 *
 * Description: checks if a character is upper
 * Return: 1 if character is digit , 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

