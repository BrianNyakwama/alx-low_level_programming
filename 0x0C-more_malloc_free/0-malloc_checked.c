#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - function that allocates memory
  * @b: number of bytes to be allocated
  *
  * Return: pointer to the allocated memory
  * Status value of 98 if malloc fails
  */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
