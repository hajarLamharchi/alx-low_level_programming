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
	dlistint_t *ptr = *h, *ptr2 = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	while (idx > 1 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}
	if (ptr->next == NULL)
	{
		ptr->next = new_node;
		new_node->prev = ptr;
		return (new_node);
	}
	if (idx > 1)
	{
		free(new_node);
		return (NULL);
	}
	ptr2 = ptr->next;
	ptr->next = new_node;
	ptr2->prev = new_node;
	new_node->prev = ptr;
	new_node->next = ptr2;
	return (new_node);
}
