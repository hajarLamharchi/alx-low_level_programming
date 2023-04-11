#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a space in memory contains copy of str
 * @str: string input
 * Return: pointer to the duplicated string
 * NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str)
{
	unsigned long int i;
	unsigned long int size;
	char *ptr;

	size = sizeof((unsigned long int *)(str));
	ptr = malloc(size);
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	else if (size != sizeof((unsigned long int *)(ptr)))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = *(str + i);
		}
	}
	return (ptr);
}
