#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 *      pair should be stored in array of a hash table.
 * @key: The index key to find
 * @size: The array table size
 *
 * Return: The index of the key.
 *
 * Description:
 * This function calculates the index where  key/value pair should be stored
 * in the array of hash table using the djb2 hash algorithm.It takes the hash
 * value generated from the key and calculates the modulo with the size of the
 * array to ensure it falls within the valid array indices.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
