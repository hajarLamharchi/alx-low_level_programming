#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of the linked list
 * @head: points to a pointer to the head of the linked list
 * @n: the value
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *current = *head;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}

	temp->n = n;

	if ((*head) == NULL)
	{
		*head = temp;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
		temp->next = NULL;
	}
	return (temp);
}
