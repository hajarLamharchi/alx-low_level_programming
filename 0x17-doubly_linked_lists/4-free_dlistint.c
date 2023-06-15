#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: points to the head of the list to be freed
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;

		free(ptr);
	}
}
