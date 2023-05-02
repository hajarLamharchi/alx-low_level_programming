#include "lists.h"

/**
 * get_nodeint_at_index - return the node at index
 * @head: points at the head of the linked list
 * @index: index of the node to return
 * Return: the node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i = 0;

	while (current_node != NULL)
	{
		if (i == index)
		break;
		else
		{
			current_node = current_node->next;
			i++;
		}
	}
	return (current_node);
}
