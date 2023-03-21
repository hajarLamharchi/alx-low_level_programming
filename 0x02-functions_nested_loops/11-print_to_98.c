#include "main.h"
/**
 * print_to_98 - prints the numbers from n to 98
 *
 * @n: function argument
 *
 * Return: Always 0 success
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		{
		if (n < 10)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		}
		if (n > 98)
			n++;
		else if (n < 98)
			n--;
		else
		{
			_putchar('9');
			_putchar('8');
			_putchar('\n');
		}
	}
}


