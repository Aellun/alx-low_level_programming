#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	/* Declare a temporary list_t pointer to traverse the linked list */
	list_t *temp;

	/* Loop through the linked list */
	while (head)
	{
		/* Store the next node's address in the temporary pointer */
		temp = head->next;

		/* Free the memory allocated for the string in the current node */
		free(head->str);

		/* Free the memory allocated for the current node */
		free(head);

		/* Move to the next node in the linked list */
		head = temp;
	}
}

