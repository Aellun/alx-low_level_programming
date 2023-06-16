#include <stdio.h>
/**
 * main - write single digit numbers from 0 to 9.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
/*here we use the sky values of 0 and 9 */
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
/* print out a new line */
	putchar('\n');
	return (0);
}
