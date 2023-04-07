#include "main.h"
/**
 * _strlen - calculate the length of the string
 * @s: parameter
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}
