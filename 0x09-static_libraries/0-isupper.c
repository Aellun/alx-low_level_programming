#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char tobe  check
 *
 * Return: 0 on success or 1 on otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

