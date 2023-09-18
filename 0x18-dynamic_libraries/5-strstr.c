#include "main.h"
/**
 * _strstr - function is to find the first occurrence of the
 * needle string within the haystack string.
 * @haystack: an input string
 * @needle: a string to search for
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
/*Assign the current position in 'haystack' to a temporary pointer 'l'*/
		char *l = haystack;
/*Assign the starting position of 'needle' to a temporary pointer 'p'*/
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;/*Move to the next character in 'l'*/
			p++;/*Move to the next character in 'p'*/
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
