#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
	j = 0;
		while (j < 10)
		{
		_putchar((j * i) + '0');
		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		j++;
		}
		_putchar('\n');
		i++;
	}
}
