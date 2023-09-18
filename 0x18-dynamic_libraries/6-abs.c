#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *purpose of this function is to ensure that the returned value
 *is always positive, regardless of whether the input
 *n is positive or negative.
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}

