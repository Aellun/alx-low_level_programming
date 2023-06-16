#include <stdio.h>

/**
 * main - output both lower and upper case of the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
/*loop through through the aphabets one by one*/
	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
/*print a new line*/
	putchar('\n');
	return (0);
}
