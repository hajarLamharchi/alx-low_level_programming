#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: points to a pointer to the dlistint_t list
 * @n: data of the new node to add
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (head == NULL)
		return (NULL);

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (*head);
}
