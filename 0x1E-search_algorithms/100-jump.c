#include "search_algos.h"
#include <math.h>


size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: ptr to 1st element of array to search
 * @size: element number in array
 * @value: value to search for
 *
 * Description: assume array will be sorted in ascending order
 *              use the square root of the size of the array as the jump step
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t down, up, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (up = 0; up < size && array[up] < value;
			down = up, up += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
				up, array[up]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", down, up);

	for (; down <= min(up, size - 1); down++)
	{
		printf("Value checked array[%lu] = [%d]\n", down, array[down]);
		if (array[down] == value)
			return (down);
	}

	return (-1);
}
