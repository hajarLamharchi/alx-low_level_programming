#include "main.h"
#include <string.h>
/**
 * is_palindrome - check if a string is a palindrome
 * @s: string input
 * Return: 1 if true or 0 if false
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (function1(s, 0, len));
}
/**
 * function1 - check if a string is palindrome
 * @s: string input
 * @i: integer input
 * @len: integer input
 * Return: 1 if true 0 if false
 */
int function1(char *s, int i, int len)
{
	if (*s == '\0')
	{
		return (0);
	}
	else if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	else if (len < i)
	{
		return (1);
	}
	else
		return (function1(s, i + 1, len - 1));
}
