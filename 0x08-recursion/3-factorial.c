#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: number integer parameter
  *
  * Return: Factorial if n >0
  * -1 if an error occurs
  * 1 if 0
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
