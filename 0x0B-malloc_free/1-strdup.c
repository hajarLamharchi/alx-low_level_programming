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
	char *ptr;

	ptr = malloc(sizeof((int *)(str)));
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	else if (sizeof((int *)(str)) > sizeof((int *)(ptr)))
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < sizeof((int *)(str)); i++)
		{
			*(ptr + i) = *(str + i);
		}
	}
	return (ptr);
}
