#include "main.h"

/**
 * print_binary - prints the binary rep of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int i;
	int start_printing = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			start_printing = 1;

		if (start_printing)
			_putchar(((n >> i) & 1) + '0');
	}
}

