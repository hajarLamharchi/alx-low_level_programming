#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: points to the pointer to head of the dlistint_t list
 * @idx: position where to insert the new node
 * @n: data of the new node
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *ptr = *h;
	dlistint_t *ptr2 = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	while (idx != 1 && ptr->next != NULL)
	{
		ptr = ptr->next;
		idx--;
	}
	if (idx != 1)
		return (NULL);
	ptr2 = ptr->next;
	ptr->next = new_node;
	ptr2->prev = new_node;
	new_node->prev = ptr;
	new_node->next = ptr2;
	return (new_node);
}