#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head;
	hare = head;

	do {
		tortoise = tortoise->next;
		hare = hare->next;
		if (hare)
			hare = hare->next;
		else
			return (0);
	} while (tortoise != NULL && hare != NULL && tortoise != hare);

	if (tortoise == hare)
	{
		do {
			nodes++;
			tortoise = tortoise->next;
		} while (tortoise != hare);
	}

	return (nodes);
}

