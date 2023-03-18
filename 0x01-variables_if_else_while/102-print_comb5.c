#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
		{
			for (k = i ; k <= 9 ; k++)
			{
				for (l = 1 ; l <= 9 ; ++l)
				{
					if (i != 9 && j != 8)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
