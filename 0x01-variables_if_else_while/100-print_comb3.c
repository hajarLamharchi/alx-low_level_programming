#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 9)
	{
		int j = i + 1;

		while (j < 10)
		{
			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
				j++;
			}
			i++;
		}
	}
	return (0);
}
