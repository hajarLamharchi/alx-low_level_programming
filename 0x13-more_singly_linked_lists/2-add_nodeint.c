#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linkd list
 * @head: points to the pointer to the head of the linked list
 * @n: the value to be added
 * Return: pionter to the new created list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp->next = (*head);
		(*head) = temp;
	}
	return (*head);
}
