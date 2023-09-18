#include "main.h"
/**
 * _strlen - calculates and returns the length of a string
 * @s: input string.
 * Return: length of the string
 */
int _strlen(char *s)
{
	int longi = 0;/*Variable to store the length of the string*/

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
