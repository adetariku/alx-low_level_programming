#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c : the number to be chcked.
 *
 * Return : 1 if the number  is a alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
