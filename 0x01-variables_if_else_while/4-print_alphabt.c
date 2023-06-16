#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - output alphabetical letters  without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
/* use sky values where 2=97 and z=123*/
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
