#include "main.h"
#include <stdio.h>
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
			putchar(i + '0');
			putchar(':');
			putchar(j + '0');
			putchar('\n');
		}
}

