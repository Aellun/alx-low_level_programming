#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 *
 * @list: pointer to the head of the skip list to search
 * @value: value to search for
 * Return: pointer on the first node where value is located,
 * -1 if head is null or value is not present in the list
 *
 * Assumptions: list will be sorted in ascending order
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tempNode = NULL, *stopNode = NULL;

	if (!list)
		return (NULL);

	tempNode = list;
	while (tempNode && tempNode->express && tempNode->express->n < value)
	{
		printf("Value searched at index [%lu] = [%i]\n",
				tempNode->express->index, tempNode->express->n);
		tempNode = tempNode->express;
	}
	stopNode = tempNode;
	while (stopNode && stopNode->next != stopNode->express)
		stopNode = stopNode->next;
	/* value potentially lies between two express nodes */
	if (tempNode->express)
	{
		printf("Value searched at index [%lu] = [%i]\n",
				tempNode->express->index, tempNode->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
				tempNode->index, tempNode->express->index);
	}
	/* value is greater than last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
				tempNode->index, stopNode->index);

	while (tempNode != stopNode && tempNode->n < value)
	{
		printf("Value searched at index [%lu] = [%i]\n",
				tempNode->index, tempNode->n);
		tempNode = tempNode->next;
	}
	printf("Value searched at index [%lu] = [%i]\n",
			tempNode->index, tempNode->n);

	if (tempNode == stopNode)
		return (NULL);
	return (tempNode);
}
