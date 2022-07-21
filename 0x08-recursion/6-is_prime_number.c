#include "main.h"
/**
  *  has_a_factor - checks the divisibility of aninteger n
  *  @n : the number to be checked whether it is a prime number or not
  *  @c : a number to be used as a counter
  *
  *  Return: returns either 0 or 1
  */
int has_a_factor(int n, int c)
{
	if (n <= 1)
		return (0);
	if ((n % c) == 0)
		return (0);
	if (c > n / 2)
		return (1);
	return (has_a_factor(n, c + 1));
}
/**
  * is_prime_number - checks whether a number is a prime or not
  * @n : the number to be checked whether it is a prime or not
  *
  * Return: integer 1 if n is prime 0 otherwuse
  */
int is_prime_number(int n)
{
	int c = 3;

	if (n == 2)
		return (1);
	return (has_a_factor(n, c));
}
