#include "lists.h"

/**
 * sum_listint - returns the sum of the data of a linked list
 * @head: points at the head of the linked list
 * Return: the sum of n
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
