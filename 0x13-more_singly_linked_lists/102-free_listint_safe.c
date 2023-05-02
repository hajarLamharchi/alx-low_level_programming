#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: double pointer to the head of the list
 * Return: size of the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t count = 0;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
		count++;
	}
	*h = NULL;
	return (count);
}
