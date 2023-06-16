#include <stdio.h>

/**
 * main - prints all possible comination for single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
/* take the sky values */
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

