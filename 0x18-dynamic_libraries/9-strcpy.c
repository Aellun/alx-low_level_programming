#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: destination string
* @src: source string
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
/*Initializing a variable 'l' to keep track of the length of the src*/
	int l = 0;
/*Initializing a variable 'x' for iterating through the characters*/
	int x = 0;
/*Calculate the src length by iterating until the null terminator is found*/
	while (*(src + l) != '\0')
	{
		l++;
	}
/*Iterate through each character of the source string*/
	for ( ; x < l ; x++)
	{
/*Copy the characters from the source string to the destination string*/
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
