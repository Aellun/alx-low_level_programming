#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers specified
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;
/*Check if the range is invalid (min > max)*/
	if (min > max)
		return (NULL);
/*Calculate the size of the array*/
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
/*Check if memory allocation was successful*/

	if (ptr == NULL)
		return (NULL);
/*Initialize the elements of the array with values in the range*/
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
