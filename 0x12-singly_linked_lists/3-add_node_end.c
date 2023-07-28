#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/*Declare a new list_t pointer to hold the new node */
	list_t *new;
	/* Declare a temporary list_t pointer to traverse the linked list */
	list_t *temp = *head;
	/*Variable to store the length of the new string */
	unsigned int len = 0;

	/*Calculate the length of the new string */
	while (str[len])
		len++;

	/*Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Duplicate the input string and store it in the new node */
	new->str = strdup(str);
	/* Store the length of the new string in the new node */
	new->len = len;
	/* Set the "next" pointer of the new node to NULL as it will be the last node */
	new->next = NULL;

	/* Check if the linked list is empty (head is NULL) */
	if (*head == NULL)
	{
		/* If empty, set the head to point to the new node and return the new node */
		*head = new;
		return (new);
	}

	/* Traverse the linked list to find the last node */
	while (temp->next)
		temp = temp->next;

	/* Set the "next" pointer of the current last node to the new node`*/
	temp->next = new;

	/* Return the address of the new element (the new last node) */
	return (new);
}

