#include "main.h"
/**
 * puts2 - prints every other caracter of a string
 * @str: input parameter
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
