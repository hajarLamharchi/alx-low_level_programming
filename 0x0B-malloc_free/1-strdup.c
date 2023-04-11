#include "main.h"
#include <stdlib.h>
#include <string.h>
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

	size = strlen(str);
	ptr = malloc(sizeof(char) * (size + 1));
	if (str == NULL || ptr == NULL)
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
