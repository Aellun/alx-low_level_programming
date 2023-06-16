#include <stdio.h>

/**
 * main -write hexadecimal i.e 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
/* here we use the sky values of 0 and 9 */
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
/* here we write the sky values of a to f */
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
/*we write a new line */
	putchar('\n');
	return (0);
}
