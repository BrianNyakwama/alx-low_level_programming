#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: integer input number
  * Return: 1 (greater than zero), 0 (is zero), -1 (is less than zero)
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
