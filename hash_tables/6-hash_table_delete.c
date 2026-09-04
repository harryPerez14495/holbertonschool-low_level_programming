#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to delete
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *next;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}
