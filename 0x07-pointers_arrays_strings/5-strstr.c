#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: input string
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p)
		{
			l++;
			p++;
		}

		if (!*p)
			return (haystack);

		haystack++;
	}
	return (0);
}
