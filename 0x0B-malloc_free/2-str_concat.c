#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input 1 concatenate
 * @s2: input 2 to concatenate
 * Return: concatenated of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
/* declare a char pointer to hold the concatenated string*/
	char *conct;
	int i, ci;

	if (s1 == NULL)
/*If input string s1 is NULL, assign an empty string to it*/
		s1 = "";
	if (s2 == NULL)
/*If input string s2 is NULL, assign an empty string to it*/
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;/* Calculate the length of string s1*/
	while (s2[ci] != '\0')
		ci++;/*Calculate the length of string s2*/
/*Allocate memory for the concatenated string*/
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;/* Copy characters from s1 to the concatenated string*/
	}
	conct[i] = '\0';
	return (conct);
}
