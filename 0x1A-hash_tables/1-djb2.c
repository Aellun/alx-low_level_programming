#include "hash_tables.h"

/**
 * hash_djb2 - the function implementing algorithm for the djb2.
 * @str: The str to hash.
 *
 *Description:
 * This function calculates a hash value for a given string using the djb2
 * hash algorithm. It iterates through the characters of the input string
 * and updates the hash value by shifting it left by 5 bits, multiplying it
 * by 33, and adding the ASCII value of each character.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int h;

	hash = 5381;/*initializes the hash value with with a prime num*/
	while ((h = *str++))
		hash = ((hash << 5) + hash) + h; /* hash * 33 + h */

	return (hash);
}
