#include "main.h"
#include <string.h>
/**
 * is_palindrome - check if a string is a palindrome
 * @s: string input
 * Return: 1 if true or 0 if false
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len;

	len = strlen(s);
	if (i >= (len - i - 1))
	{
		return (1);
	}
	if (*(s + i) == *(s + (len - i - 1)))
	{
		is_palindrome(s + i + 1);
	}
	return (0);
}
