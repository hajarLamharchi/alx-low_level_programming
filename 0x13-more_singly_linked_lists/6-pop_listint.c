#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: points to the head of the linked list
 * Return: the head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if ((*head) == NULL || head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
