#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	for (j = len; j <= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
