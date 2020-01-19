#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: string converted to hash
 * @size: size of hash table
 * Return: the index of the key in the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
