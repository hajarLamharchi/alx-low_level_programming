#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: double pointer to the head of the linked list
 * Return: pointer to the head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *temp2 = NULL;

	if (!head || !(*head))
		return (NULL);

	while ((*head) != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (*head);
}
