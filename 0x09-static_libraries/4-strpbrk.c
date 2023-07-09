#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input string
 * @accept: a string of characters to search for in s
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
/*Iterate through each character in the 'accept' string*/
		for (k = 0; accept[k]; k++)
		{
/*If the current character in 's' matches a character in 'accept'*/
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
