#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *ptr = NULL;
	unsigned int count = 0;

	ptr = (list_t *)h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] (%s)\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}

	return (count);
}
