#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table you to get the value from
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	hash_node_t *c_node = NULL;

	if (!ht)
		return;
	
	printf("{");

	for (i = 0; i < ht->size; i++)
	{	
		c_node = ht->array[i];

		while (c_node != NULL)
		{
			printf("'%s':'%s'", c_node->key, c_node->value);
			if (c_node->next == NULL && i == ht->size - 1)
				printf("}");
			else
				printf(", ");

			c_node = c_node->next;
		}
	}
}
