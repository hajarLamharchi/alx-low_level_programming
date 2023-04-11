#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2;
	char *ptr;
	int i;

	size1 = strlen(s1);
	size2 = strlen(s2);
	ptr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (s1 == NULL)
	{
		*s1 = ' ';
	}
	if (s2 == NULL)
	{
		*s2 = ' ';
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
			*(ptr + i) = *(s1 + i);
		}
		else
		{
			*(ptr + i) = *(s2 + i - size1);
		}
	}
	return (ptr);
}
