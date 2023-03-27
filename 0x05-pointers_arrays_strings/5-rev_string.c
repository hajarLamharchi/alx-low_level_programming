#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j = 0;
	char temp;

	while (s[j] != '\0')
	{
		len++;
		j++;
	}
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
