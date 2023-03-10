#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: string
  * @accept: prefix to be get
  *
  * Return: number of bytes only from accept in s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				b++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
