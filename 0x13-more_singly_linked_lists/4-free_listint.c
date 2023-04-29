#include "lists.h"

/**
 * free_listint - fress a linked list
 * @head: points to the head of the linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next_node;

	while (current_node->next != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
