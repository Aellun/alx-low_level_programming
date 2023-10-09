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


void hash_table_delete(hash_table_t *ht) {
	if (ht == NULL) {
		return;
	}

	/*Iterate through the hash table's array and linked lists, 
	  freeing memory allocated for keys, values, nodes, and the array itself.*/
	for (unsigned long int c = 0; c < ht->size; c++) {
		hash_node_t *node = ht->array[c];
		while (node != NULL) {
			hash_node_t *tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
