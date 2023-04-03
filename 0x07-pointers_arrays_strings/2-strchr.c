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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (&s[i]);
}
