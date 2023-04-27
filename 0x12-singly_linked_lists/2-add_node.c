#include "lists.h"

/**
 * add_node - add a node at the begginning of a linked list
 * @head: a pointer to a pointer to the head of the list
 * @str: the data to be added
 * Return: address to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
