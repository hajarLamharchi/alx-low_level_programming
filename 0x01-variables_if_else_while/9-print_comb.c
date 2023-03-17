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

	while (i < 10)
	{
		putchar(i + '0');
		while (j < 10)
		{
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	return (0);
}
