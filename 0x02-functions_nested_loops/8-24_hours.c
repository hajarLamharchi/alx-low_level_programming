#include "main.h"
/**
 * jack_bauer - prints the munites of a whole day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 23; i++)
		for (j = 0; j < 60 ; j++)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
		}
}

