#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: set of characters to search for
 * Return: pointer to the byte in `s` that matches any byte in `accept`,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}

	return ('\0');
}

