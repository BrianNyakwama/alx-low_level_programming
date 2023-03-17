#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string parameter
  * @s2: second string parameter
  * @n: number of bytes to be allocated
  *
  * Return: pointer to newly allocated space, if fail then NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	cat = malloc(sizeof(char) * (len + 1));
	if (cat == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		cat[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		cat[len++] = s2[index];
	cat[len] = '\0';
	return (cat);
}
