#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string input
 * @accept: set of bytes to search from
 * Return: pointer to the first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p;

	p = NULL;
	while (*s != '\0' && p == NULL)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				p = s;
				break;
			}
		}
		s++;
	}
	return (p);
}
