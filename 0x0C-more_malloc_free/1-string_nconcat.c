#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: nombre of byte to concatenate from s2
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	ptr = malloc(size1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1 + n; i++)
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
