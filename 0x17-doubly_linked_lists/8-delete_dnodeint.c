#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: points to the pointer to head o dlistint_t list
 * @index: position of the node to delete
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while (index > 1 && ptr != NULL)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr == NULL)
		return (-1);

	ptr->prev->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	free(ptr);
	return (1);
}

