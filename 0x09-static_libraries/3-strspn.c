#include "main.h"
/**
 * _strspn - calculates the length of the prefix substring
 * @s: input string
 * @accept: string containing characters to match
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
/*If the end of     the 'accept' string is reached*/
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
/*Return the final length of the prefix substring found in 's'*/
	return (n);
}
