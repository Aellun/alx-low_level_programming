#include "search_algos.h"

int binary_search_recursion(int *array, int value,
		size_t left, size_t right);

/**
 * binary_search_recursion - helper to [advanced_binary] recursive searche
 * for a value in an integer array
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @left: starting index in array
 * @right: ending index in array
 *
 * Return: -1 If the value is not present or the array is NULL.
 *         else index value
 */
int binary_search_recursion(int *array, int value,
		size_t left, size_t right)
{
	size_t mid, m;

	if (!array)
		return (-1);

	mid = (left + right) / 2;
	printf("Searching in array: ");
	for (m = left; m <= right; m++)
		printf("%m%s", array[m], m == right ? "\n" : ", ");

	if (array[left] == value)
		return ((int)left);

	if (array[left] != array[right])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
						mid + 1, right));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
						left, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 If the value is not present or the array is NULL.
 *         else index value
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, left, right));
}
