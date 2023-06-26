#include "main.h"
/**
 * _strlen - returns the length of a string
 * @k: string
 * Return: length
 */
int _strlen(char *k)
{
	int longi = 0;

	while (*k != '\0')
	{
		longi++;
		k++;
	}

	return (longi);
}
