#include "main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: the destination string,
* @src: the source string
* @n: maximum number of bytes to be concatenated.
*
* Return: dest which is a pointer to the destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;/*Find the length of the destination string*/
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
/*Concatenate each character from the source to the destination*/
	dest[i] = src[j];
	i++;
	j++;
	}
/*Add the null terminator at the end of the concatenated string*/
	dest[i] = '\0';
	return (dest);
}

