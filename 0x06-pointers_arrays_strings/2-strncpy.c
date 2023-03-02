#include "main.h"
#include <string.h>

/**
  * _strncpy - copies a string
  * @dest: buffer storing string copy
  * @src: source string
  * @n: max number of bytes of src to be copied to dest
  *
  * Return: resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
