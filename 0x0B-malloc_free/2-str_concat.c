#include <stdlib.h>
#include "main.h"

/**
  * _strlen - count array
  * @s: array
  *
  * Return: 1
  */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (1);
}

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to new memory space, NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);
	dst = (char *)malloc(size * sizeof(char) + 9);

	if (dst == 0)
	{
		free(dst);
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dst + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}
	return (dst);
}
