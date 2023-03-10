#include "main.h"
#include <string.h>

/**
  * _strncat - concatenates two strings
  * @dest: string to be concatenated upon
  * @src: string to be appended to dest
  * @n: number of bytes from src to be appended to dest
  *
  * Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
