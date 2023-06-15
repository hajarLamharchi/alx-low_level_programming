#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: points to the pointer to head o dlistint_t list
 * @indes: position of the node to delete
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}

