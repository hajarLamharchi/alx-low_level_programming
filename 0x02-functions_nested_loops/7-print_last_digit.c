#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 *
 * @i: function argument
 *
 * Return: Always 0
 */

int print_last_digit(int i)
{
	int r;

	r = i % 10;
	_putchar(r + '0');
	return (0);
}
