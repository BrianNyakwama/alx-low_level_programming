#include "main.h"

/**
  * print_chessboard - prints the chessboard
  * @a: array
  *
  * Return: nothing
  */
void print_chessboard(char (*a)[8])
{
	int id1, id2;

	for (id1 = 0; a[id1][7]; id1++)
	{
		for (id2 = 0; id2 < 8; id2++)
			_putchar(a[id1][id2]);
		_putchar('\n');
	}
}
