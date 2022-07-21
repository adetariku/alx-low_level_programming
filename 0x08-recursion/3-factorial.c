#include "main.h"
/**
  * factorial - calculates the factorial of a non negative integer
  * @n : a non negative integer
  * Return : Integer (the factorial of n)
  */  
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
