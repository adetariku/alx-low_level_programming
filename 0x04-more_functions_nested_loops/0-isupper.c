#include "main.h"
/**
 * _isupper - checks if a char is uppercase letter
 * @c : the input character
 *
 * Return : 1 if   uppercase, 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
