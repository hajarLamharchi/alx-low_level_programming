#include "lists.h"

/**
 * listint_len - calculates the number of elements in a linked list
 * @h: points to the header of the linked list
 * Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}
