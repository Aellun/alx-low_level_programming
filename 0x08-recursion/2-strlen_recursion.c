#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;/* initialize the variable to store the  lenght of string*/

	if (*s != '\0')/* check if the current character is not null*/
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
