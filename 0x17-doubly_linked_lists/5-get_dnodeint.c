#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: points to the head of the dlistint_t list
 * @index: position of the node to return
 * Return: the nth node and NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	ptr = head;
	while (index != 0 && ptr != NULL)
	{
		ptr = ptr->next;
		index--;
	}
	if (index != 0)
		return (NULL);
	else
		return (ptr);
}
