#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: key of the hash table
 * @value: value of the hash table
 * Return: 1 if succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
		node->next = ht->array[0];
	return (1);
}
