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
	unsigned int i = 0;

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < idx - 1 && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (i < idx - 1 || node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);

}
