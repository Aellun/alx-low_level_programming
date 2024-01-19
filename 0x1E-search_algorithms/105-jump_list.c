#include "search_algos.h"

/**
 * jump_list - Searching for an algorithm in a sorted singly
 * linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: NULL if value not present in head or head is NULL
 *          else a pointer to the first node where the value is located.
 *         Otherwise,
 *
 * Description: -1 Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t hop, hop_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	hop = 0;
	hop_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (hop += hop_size; jump->index < hop; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value searched at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value searched at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value searched at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
