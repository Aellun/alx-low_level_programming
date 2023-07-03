#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of a string
 * that consists of only characters from a specified set
 * @s: input string
 * @accept: set of characters to compare against
 * Return: number of characters in `s` that consist of only characters from `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
	}
	return (n);
}
