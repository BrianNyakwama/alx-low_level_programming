#include "main.h"

/**
  * _pow_recursion - returns the value of x raised to power y
  * @x: number raised
  * @y: power number
  *
  * Return: -1 if y < 0, result of raising power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
