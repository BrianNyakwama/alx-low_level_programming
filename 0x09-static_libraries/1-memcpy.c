#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @dest: memory area destination
  * @src: source memory area
  * @n: bytes of memory to be copied
  *
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
