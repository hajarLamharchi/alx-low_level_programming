#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: points to the pointer to the head of the linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next_node;

	if ((*head) == NULL)
	{
		return;
	}

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	(*head) = NULL;
}
