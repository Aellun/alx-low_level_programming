#include <stdio.h>
/**
 * main - display an alphabetical array characters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
/*loop over each character in array*/
	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
/*print a new line*/
	putchar('\n');
	return (0);
}
