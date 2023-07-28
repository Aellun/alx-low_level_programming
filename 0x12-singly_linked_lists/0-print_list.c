#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	/* Initialize a variable to keep track of the number of nodes printed */
	size_t s = 0;

	/* Loop through the linked list */
	while (h)
	{
		/* Check if the string in the current node is NULL */
		if (!h->str)
			/* Print [0] (nil) if the string is NULL */
			printf("[0] (nil)\n");
		else
			/* Print the length and string content of the current node */
			printf("[%u] %s\n", h->len, h->str);

		/* Move to the next node in the linked list */
		h = h->next;

		/* Increment the number of nodes printed */
		s++;
	}

	/* Return the total number of nodes printed */
	return (s);
}

