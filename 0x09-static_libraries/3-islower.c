#include "main.h"
/**
 * _islower -check if alphabet is lowercase or not
 *
 * Return : 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
