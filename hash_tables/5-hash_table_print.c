#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int first;

	if (ht == NULL)
		return;

	first = 1;
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			if (first == 0)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}

	printf("}\n");
}
