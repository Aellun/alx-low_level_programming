#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A ptr to the hash table.
 * @key: The key to update != empty str
 * @value: The value correlated to the key.
 * Return: 1 on success 0 on otherwise
 * Description:
 * This function adds or updates an element in a hash table. It takes a pointer
 * to the hash table, a key, and a value as input. The key must not be an empty
 * string. If the key already exists in the hash table, the associated value is
 * updated. If the key is not found, a new key-value pair is added.
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		free(value_copy);
		return (0);/*Invalid index*/
	}
	for (j = index; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = value_copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);/*Memory allocation failed*/
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		free(value_copy);
		return (0);/*Memory allocation failed*/
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
