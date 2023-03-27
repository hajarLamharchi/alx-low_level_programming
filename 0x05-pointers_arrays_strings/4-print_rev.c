#include "main.h"
int _strlen(char *s);
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
