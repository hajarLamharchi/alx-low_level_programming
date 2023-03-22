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
			t = i * j;
			for (j = 0 ; j <= n ; j++)
			{

			if (j != 0 && t < 10)
				printf(",   %d", t);
			else if (j != 0 && t >= 10 && t < 100)
				printf(",  %d", t);
			else if (j != 0 && t >= 100)
				printf(", %d", t);
			else if (j == 0)
				printf("%d", t);
			}
		}
		printf("\n");
	}
}
