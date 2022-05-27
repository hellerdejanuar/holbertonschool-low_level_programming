#include "hash_tables.h"

/**
 * key_index - gets hash code for key
 * @size: size of table
 * @key: string to be hashed
 * Return: hash code
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
