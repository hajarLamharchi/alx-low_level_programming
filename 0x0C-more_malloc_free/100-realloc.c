#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocate a momory block using malloc and free
 * @ptr: pointer to a memory previously allocated
 * @old_size: size of ptr
 * @new_size: size of the new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	old_ptr = ptr;
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			*(new_ptr + i) = *(old_ptr + i);
		}
	}
	else
	{
		new_ptr = malloc(new_size);
		for (i = 0; i < new_size; i++)
		{
			*(new_ptr + i) = *(old_ptr + i);
		}
	}
	free(ptr);
	return (new_ptr);
}
