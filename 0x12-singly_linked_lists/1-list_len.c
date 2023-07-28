#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	/*Initialize a variable to keep track of the number of elements in the list*/
	size_t n = 0;

	/* Loop through the linked list */
	while (h)
	{
		/*Increment the element count*/
		n++;

		/*Move to the next node in the linked list*/
		h = h->next;
	}

	/*Return the total number of elements in the list*/
	return (n);
}

