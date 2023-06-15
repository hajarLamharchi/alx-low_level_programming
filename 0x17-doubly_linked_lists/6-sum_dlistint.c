#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data of a dlistint_t list
 * @head: points to the head of the dlistint_t list
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
