#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: string
  * @c: character
  *
  * Return: pointer to first occurrence if c is present
  * NULL if c not found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}