#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *Return 1 if c is digit
 * Return: 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

