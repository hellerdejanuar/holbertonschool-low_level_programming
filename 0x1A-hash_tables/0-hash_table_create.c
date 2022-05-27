#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size == 0);
		return (NULL);

	hash_table_t *new_table = NULL;
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL):
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(hash_node_t *, size);
	if (new_table->array == NULL):
		return (NULL);

	return (new);
}
