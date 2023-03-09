#include "main.h"

/**
  * _strlen_recursion - returns the length of string
  * @s: string parameter
  *
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
  * comparator - compares each character of string
  * @s: string parameter
  * @num1: smallest iterator
  * @num2: biggest iterator
  *
  * Return: .
  */
int comparator(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + comparator(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
  * is_palindrome - detects a string palindrome
  * @s: string parameter
  *
  * Return: 1 if palindrome, 0 if not
  */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
