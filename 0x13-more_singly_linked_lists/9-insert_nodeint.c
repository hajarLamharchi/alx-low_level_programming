#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points at the head of the linked list
 * @idx: the position of the new index
 * @n: the value of the new node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	
	while (idx != 1)
	{
		node = node->next;
		idx--;
	}

	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}

