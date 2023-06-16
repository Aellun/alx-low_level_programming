#include <stdio.h>

/**
 * main - write alphabetical letters in lowercase and reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
/*declare variable that will store curent value at loop */
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
/*prints new line */
	putchar('\n');
	return (0);
}
