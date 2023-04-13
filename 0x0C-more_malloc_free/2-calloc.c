#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: elements size
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = memset(ptr, 0, nmemb * size);
	return (ptr);
}
