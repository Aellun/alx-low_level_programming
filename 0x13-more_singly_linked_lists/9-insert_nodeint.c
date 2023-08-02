#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	/* Check if head is NULL or the new node allocation fails */
	if (!head)
		return (NULL);

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	/* Set the data for the new node */
	new->n = n;
	new->next = NULL;

	/* Insert at the beginning of the list */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/* Find the previous node before the desired index */
	temp = *head;
	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	/* If temp is NULL or the next node is NULL, index is out of range */
	if (!temp || !temp->next)
	{
		free(new);
		return (NULL);
	}

	/* Insert the new node at the desired index */
	new->next = temp->next;
	temp->next = new;

	return (new);
}

