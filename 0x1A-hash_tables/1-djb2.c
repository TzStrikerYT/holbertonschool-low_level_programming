#include "hash_tables.h"

/**
 * hash_djb2 - hask key generator
 * @str: input strung to create key
 * Return: hash key
 */

unsigned long hash_djb2(unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
