#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its contents
 * @ht: ptr to a hash table to be deleted
 *
 * Description:
 * This function deletes a hash table along with its contents. It iterates
 * through the hash table's array and linked lists, freeing memory allocated
 * for keys, values, nodes, and the array itself. After deletion, the hash
 * table ptr itself becomes invalid and should not be used further.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int e;

	for (e = 0; e < ht->size; e++)
	{
		if (ht->array[e] != NULL)
		{
			node = ht->array[e];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
