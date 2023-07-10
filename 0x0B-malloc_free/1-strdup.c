#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char pointer
 * Return: 0 pointer to duplicate string, null if fail
 */
char *_strdup(char *str)
{
/* Declare a char pointer to hold the duplicate string*/
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;/* calculate the length of the input string*/
/*allocate memory for the duplicate string*/
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
/*copy each character from the the input string to the duplicate string*/
		aaa[r] = str[r];

	return (aaa);
}
