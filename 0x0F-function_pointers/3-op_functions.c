#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function to add two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes subtraction
 * @a: first parameter
 * @b: second parameter
 *
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division
 * @a: first number
 * @b: second number
 *
 * Return: performs a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first integer value
 * @b: second integer value
 * Return: modulo result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
