#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: points to the head of the linked list
 * @index: the given index
 * Return: 1 if succeed -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node = *head;
	listint_t *current_node = *head;
	unsigned int i = 0;

	if (!(*head))
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		current_node = NULL;
		return (1);
	}
	while (i < index && current_node != NULL)
	{
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}
	if (i < index || current_node == NULL)
	{
		return (-1);
	}
	previous_node->next = current_node->next;
	free(current_node);
	current_node = NULL;
	return (1);
}
