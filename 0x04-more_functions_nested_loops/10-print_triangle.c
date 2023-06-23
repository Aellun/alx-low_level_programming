#include "main.h"
/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
* return \n if the size is less or equal to 0
* only use _putchar
* use character # to print the triangle
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
