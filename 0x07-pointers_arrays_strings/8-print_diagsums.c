#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals in a square matrix
 * @a: Pointer to the start of the matrix
 * @size: Size of the matrix (number of rows or columns)
 *
 * This function calculates the sums of the main diagonal (top-left to bottom-right)
 * and the secondary diagonal (top-right to bottom-left) of a square matrix.
 * The matrix is represented as a one-dimensional array, where elements are accessed
 * using row-major order. The sums are then printed in the format "sum1, sum2".
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		sum1 += a[y * size + y];
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

