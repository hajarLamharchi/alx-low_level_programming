#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: points to the head of the linked list
 * Return: address of the node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1 = head;
	listint_t *node2 = head->next;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	while (node2 != NULL && node2 != NULL)
	{
		if (node1 == node2)
		{
			return (node1);
		}
		node2 = node2->next;
		node1 = node1->next->next;
	}
	return (NULL);
}
