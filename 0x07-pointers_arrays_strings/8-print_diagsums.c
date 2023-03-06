#include "main.h"
#include <stdio.h>

/**
  * print_diagsums -  print sum of 2 diagonals square matrix of integers
  * @a: matrix
  * @size: size of matrix
  */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 = sum1 + a[index * size + index];
	}
	for (index = size - 1; index >= 0; index--)
	{
		sum2 += a[index * size + (size - index - 1)];
	}
	printf("%d,%d\n", sum1, sum2);
}
