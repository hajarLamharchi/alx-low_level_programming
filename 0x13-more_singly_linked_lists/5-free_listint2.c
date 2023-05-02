#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: points to the pointer to the head of the linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
	{
		return;
	}

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	(*head) = NULL;
}
