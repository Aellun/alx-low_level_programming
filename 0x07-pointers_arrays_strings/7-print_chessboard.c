#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard array
 *
 * Description: This function prints the contents of a chessboard.
 * It takes a 2D array `a` representing the chessboard and prints
 * the characters in a row-by-row fashion.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
