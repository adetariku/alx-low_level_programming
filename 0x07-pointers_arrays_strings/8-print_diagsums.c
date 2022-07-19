#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - see the description.
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Description - Prints the sum of the two diagonals of a square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row, left_diag_sum, right_diag_sum, lpointer, rpointer;

	left_diag_sum = 0, right_diag_sum = 0;
	for (row = 0; row < size; row++)
	{
		lpointer = (row * size) + row;
		left_diag_sum += *(a + lpointer);
		rpointer = (row * size) + (size - row) - 1;
		right_diag_sum += *(a + rpointer);
	}
	printf("%i, %i\n", left_diag_sum, right_diag_sum);
}
