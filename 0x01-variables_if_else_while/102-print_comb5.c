#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i != 98 && j != 99)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
