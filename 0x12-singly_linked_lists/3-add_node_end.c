#include "lists.h"

/**
 * add_node_end - add new element at the end of a linked list
 * @head: a pointer to a pointer to the head of the list
 * @str: the element to add
 * Return: address to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *current = *head;

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);

	if (*head == NULL)
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
