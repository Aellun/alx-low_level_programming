#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value,destination string
 * @src: input value,source string
 * @n: input value,maximum number of characters to be copied.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
