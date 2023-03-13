#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: first string parameter
  * @s2: second string parameter
  *
  * Return: pointer to a newly allocated space in memory
  * contains contents of s1 followed by s2 contents
  * and null terminated, or NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strout = malloc(sizeof(char) * (i + j + 1));
	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		strout[k] = s1[k];
	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];
	strout[k] = '\0';
	return (strout);
}
