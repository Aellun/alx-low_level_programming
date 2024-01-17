#include "search_algos.h"

/**
 * recursive_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * Assumptions: array will be sorted in ascending order
 *              value will not appear more than twice in array
 *
 * @array: Pointer to array 1st element
 * @size: size of the array element
 * @value: value to search for
 * Return: NULL if value not present or array is NULL(return -1)
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching value in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
