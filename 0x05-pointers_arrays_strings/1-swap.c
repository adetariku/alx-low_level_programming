#include <stdlib.h>
/**
 * swap_int - swaps the values of two integer variables
 * @a : the first variable
 * @b : the second variable
 *
 * Return - void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = (int)*a;
	*a = *b;
	*b = c;
}
