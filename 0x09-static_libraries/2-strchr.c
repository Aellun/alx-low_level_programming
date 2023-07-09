#include "main.h"
#include <stddef.h>

/**
 * _strchr - function searches for a character (c) in a given string (s).
 * @s: input string
 * @c: character to search for.
 * Return: pointer to the first occurrence of the character in the string,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
/*Check if the current character matches the target character*/
		if (s[i] == c)
/*Return a pointer to the first occurrence of the character*/
			return (&s[i]);
	}
	return (0);
}
