#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function on element array
 * @array: array
 * @size: the size of the array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
/*Check if the array or function pointer is NULL.*/

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
/*Call the function pointed by 'action' on each element of the array.*/
		action(array[i]);
	}
}
