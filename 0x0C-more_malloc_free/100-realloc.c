#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;
/*Check if the new size is equal to the old size*/
	if (new_size == old_size)
		return (ptr);
/*Check if the new size is 0 and the pointer is not NULL*/
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
/*Check if the pointer is NULL*/
	if (!ptr)
		return (malloc(new_size));
/*Allocate memory for the new block*/
	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
/*Cast the old pointer to char pointer*/
	old_ptr = ptr;
/*Copy elements from the old block to the new block*/
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
