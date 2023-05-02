#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: points at the head of the linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_node = 0;
	
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		num_node++;
		head = head->next;
	}
	return (num_node);
}
