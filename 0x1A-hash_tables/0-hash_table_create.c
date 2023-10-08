#include "hash_tables.h"

/**
 * hash_table_create - this function Creates a hash table.
 * @size: The size of the array.
 *
 * Return:NULL if something went wrong else ptr to new 
 * 				hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ht->array[i] = NULL;

	return (ht);
}
