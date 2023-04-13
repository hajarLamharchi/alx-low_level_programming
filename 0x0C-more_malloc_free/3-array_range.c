#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create an array of ordered integers
 * @min: first element
 * @max: last element
 * Return: the pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		*(ptr + i) = min++;
	}
	return (ptr);
}
