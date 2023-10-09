#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value correlated with
 *                  a key in a hash table.
 * @ht: A ptr to the hash table.
 * @key: The look up key
 *
 * Return: If key not matched then NULL. otherwise correlated value
 *
 * Description:
 * This function retrieves the value associated with a specified key in a hash
 * table. It takes a ptr to the hash table and the key to look up. If the
 * key is found in the hash table, it returns the associated value. If the key
 * is not found or if the hash table is NULL, it returns NULL.
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int j;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	j = key_index((const unsigned char *)key, ht->size);
	if (j >= ht->size)
		return (NULL);

	node = ht->array[j];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
