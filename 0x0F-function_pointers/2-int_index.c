#include "function_pointers.h"
/**
* int_index - return index place if comparison = true, else -1
* @array: array
* @size: number of elements in the array
* @cmp: pointer to the functionto compare values
* Return: 0 - Returns the index of the first element in the array
* for which the comparison function 'cmp' returns a non-zero value.
* If no such element is found or if 'array' is NULL or 'size' is less
* than or equal to 0, it returns -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
/* Check if array or function pointer is NULL or if the size is non-positive*/
	if (array == NULL || size <= 0 || cmp == NULL)
/*If any of the above conditions are true, return -1.*/
		return (-1);

	for (i = 0; i < size; i++)
	{
/*Call the function pointed by 'cmp' on each element of the array*/
		if (cmp(array[i]))
			return (i);/*return the index of the element*/
	}
/*If no element satisfies the condition, return -1.*/
	return (-1);
}
