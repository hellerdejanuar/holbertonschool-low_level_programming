#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you to add or update the key/value to
 * @key: key
 * @value: value of the associated key
 * Return: 1 success, 0 failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int h_code = 0;
	hash_node_t *curr_node = NULL;
	hash_node_t *new_node = NULL;

	if (!key || !ht)
		return (0);

	h_code = key_index((const unsigned char *)key, ht->size);

	curr_node = ht->array[h_code];

	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
			return (1);
		}
		curr_node = curr_node->next;
	}

	new_node = calloc(1, sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[h_code];
	ht->array[h_code] = new_node;

	return (1);
}
