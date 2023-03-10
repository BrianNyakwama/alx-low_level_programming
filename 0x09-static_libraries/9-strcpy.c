#include "main.h"
#include <string.h>

/**
  * *_strcpy -  function copies string from src to dest
  * @dest: destination the string is copied to
  * @src: location string is copied from
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int I = 0;
	int x = 0;

	while (*(src + I) != '\0')
	{
		I++;
	}
	for (; x < I; x++)
	{
		dest[x] = src[x];
	}
	dest[I] = '\0';
	return (dest);
}
