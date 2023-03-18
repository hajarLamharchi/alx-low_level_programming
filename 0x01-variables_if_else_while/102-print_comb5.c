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
				l = 0;
				while (l <= 9)
				{
					if (l == 0 && k == 0)
						l++;
					else if (i != 9 && j != 8)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						putchar(',');
						putchar(' ');
					}
					l++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
