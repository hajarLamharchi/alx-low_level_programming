#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = i + 1;

		while (j < 10)
		{
			if (i == 9 && j == 9)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
			else
			{
			putchar(i + '0');
			putchar(j + '0');
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
