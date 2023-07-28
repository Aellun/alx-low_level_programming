#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Declare a new list_t pointer to hold the new node */
	list_t *new;
	/* Variable to store the length of the new string */
	unsigned int len = 0;

	/* Calculate the length of the new string */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Duplicate the input string and store it in the new node */
	new->str = strdup(str);
	/* Store the length of the new string in the new node */
	new->len = len;
	/* Set the "next" pointer of the new node to point to the current head node */
	new->next = (*head);
	/* Update the head pointer to point to the new node, making it the new head */
	(*head) = new;

	/* Return the address of the new element (the new head) */
	return (*head);
}

