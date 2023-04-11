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
	long unsigned int i;
	char *ptr;

	ptr = malloc(sizeof((int *)(str)));
	if (str == NULL)
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
