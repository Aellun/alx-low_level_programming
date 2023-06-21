#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - to print all natural numbers from n to 98,
 * followed by a new line
 * @n: print from number n
 */
void print_to_98(int n)
{
	int i, j;

/*  checks if the value `n` is less than or equal to 98. */
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
/* This line prints the current number */
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
/* This line declares a for loop. */
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}

