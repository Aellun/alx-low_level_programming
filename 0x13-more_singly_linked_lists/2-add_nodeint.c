#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*Create a new node*/
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		/*Failed to allocate memory for the new node*/
		return (NULL);
	}

	/*Set the data for the new node*/
	new_node->n = n;

	/*Set the next pointer of the new node to the current head of the list*/
	new_node->next = *head;

	/*Update the head to point to the new node*/
	*head = new_node;

	/*Return the address of the new element (new node)*/
	return (new_node);
}
