#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: elements of array
  * @size: bytes
  *
  * Return: pointer to allocated memory
  * NULL if fail,or nmemb = 0, size = 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ptr = mem;
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (mem);
}
