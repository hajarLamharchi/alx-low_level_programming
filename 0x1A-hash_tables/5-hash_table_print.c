#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	bool flag = true;

	if (ht->array == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = false;
		}
	}
	printf("}\n");
}
