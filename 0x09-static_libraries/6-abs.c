#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @s: the int to check
 * Return: the absolute value of int
 */
int _abs(int s)
{
	if (s >= 0)
		return (s);
	else
		return (s * -1);
}
