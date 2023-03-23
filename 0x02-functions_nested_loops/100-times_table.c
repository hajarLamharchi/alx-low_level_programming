#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times table starting with 0
 *
 * @n: function parameter should be >0 and <15
 *
 * Return: Always 0 success
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, t;

		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				t = i * j;
				if (t > 99)
				{
					_putchar(t / 100 + '0');
					_putchar(t / 10 % 10 + '0');
					_putchar(t % 10 + '0');
				}
				else if (t > 9)
				{
					_putchar(' ');
					_putchar(t / 10 + '0');
					_putchar(t % 10 + '0');
				}
				else if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(t + '0');
				}
				else
					_putchar(t + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
