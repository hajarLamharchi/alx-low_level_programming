#include "main.h"

/**
 * times_table - prints the 9 times tables starting with 0
 *
 * Return: Always 0 success
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int t = i * j;

			if (t >= 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t / 10 + '0');
				_putchar(t % 10 + '0');
			}
			else if (t >= 10 && j == 0)
			{
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			}
			else if (t < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			}
			else if (t < 10 && j == 0)
			{
				_putchar(t + '0');
			}
		}
	_putchar('\n');
	}
}
