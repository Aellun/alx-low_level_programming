#include "main.h"
/**
 * _strcmp - compare the values of two strings
 * @s1: input value, the first string to compare,
 * @s2: input value, the second string to compare.
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
/*Check if the characters at the current index are not equal*/
		if (s1[i] != s2[i])
		{
/*Return the difference between the ASCII values of the differing characters*/
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
