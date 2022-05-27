#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you to get the value from
 * @key: key
 * Return: Value, NULL if failed
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *c_node = NULL;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	c_node = ht->array[idx];

	while (c_node != NULL)
	{
		if (strcmp(c_node->key, key) == 0)
		{
			return (c_node->key);
		}
		c_node = c_node->next;
	}

	return (NULL);
}
