#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp, *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		temp = (*h)->next;

		if (temp >= *h)
		{
			/* Loop detected, set the current node's next to NULL */
			(*h)->next = NULL;
			free(*h);
			break;
		}
		else
		{
			free(*h);
			len++;
			*h = temp;
		}
	}

	return (len);
}

