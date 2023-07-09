#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to to be converted.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
/*Sign of the resulting integer (1 for positive, -1 for negative)*/
	int sign = 1, i = 0;
	unsigned int res = 0;/*Resulting integer value*/
/*Skip non-digit char until a digit or the end of the string is found*/

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
/*Convert the remaining digit characters to the resulting integer*/
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
