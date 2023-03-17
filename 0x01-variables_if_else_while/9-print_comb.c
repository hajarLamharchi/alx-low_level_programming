#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 9)
		{
			putchar(i + '0' + '\n');
		}
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
