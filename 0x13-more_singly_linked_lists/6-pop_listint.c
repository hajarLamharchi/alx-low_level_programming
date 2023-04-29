#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: points to the head of the linked list
 * Return: the head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n = (*head)->n;

	*head = (*head)->next;
	free(temp);
	return (n);
}
