#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in a string
 * @s: the string input
 * @c: the character to locate
 * Return: the pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			break;
		}
		else
		{
			s++;
		}
	}
	return (p);
}
