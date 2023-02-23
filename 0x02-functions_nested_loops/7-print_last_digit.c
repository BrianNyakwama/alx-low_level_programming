#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: the integer to extract last digit
  *
  * Return: the last digit
  */
int print_last_digit(int n)
{
	int b;

	b = n % 10;

	if (b < 0)
	{
		_putchar(-b + '0');
		return (-b);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}
