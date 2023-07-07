#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;

	tab = malloc(sizeof(hash_table_t));
	if (!tab)
		return (NULL);

	tab->size = size;
	tab->array = calloc(sizeof(hash_node_t *) * size, tab->size);
	if (!tab->array)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}
