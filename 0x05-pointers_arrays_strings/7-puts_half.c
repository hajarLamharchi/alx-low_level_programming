#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: input parameter
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (len - 1) / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
