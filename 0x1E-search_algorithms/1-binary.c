#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * Assumptions: array will be sorted in ascending order
 *              value will not appear more than twice in array
 *
 * @array: Pointer to array 1st element
 * @size: size of the array element
 * @value: value to search for
 * Return: NULL if value not present or array is NULL(return -1)
 */
int binary_search(int *array, size_t size, int value)
{
	int left, mid, right;
	int m;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (m = left; m <= right; m++)
			printf("%i%s", array[m], m == right ? "\n" : ", ");

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
