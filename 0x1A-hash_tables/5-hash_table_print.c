#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table content
 * @ht: A ptr to the hash table
 *
 * Description:
 * This function prints the contents of a hash table in the format of a JSON-
 * like object, where key or value pairs are separated by commas & enclosed in
 * curly braces. The key or value pairs are printed in the order they appear in
 * the array of the hash table. If the hash table is NULL, it does nothing.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int j;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{\n");/*Start of JSON-like object*/
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				if (comma_flag == 1)
					printf(",\n"); /*Add a comma and newline for formatting*/
				printf("  \"%s\": \"%s\"", node->key, node->value);
				comma_flag = 1;
				node = node->next;
			}
		}
	}
	printf("\n}\n");/*End of JSON-like object*/
}
