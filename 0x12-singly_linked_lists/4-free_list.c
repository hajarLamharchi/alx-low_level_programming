#include "lists.h"

/**
 * free_list - free a linked list
 * @head: the pointer to the head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node->next);
		current_node = next_node;
	}
}
