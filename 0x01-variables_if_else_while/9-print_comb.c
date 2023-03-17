#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int a = 9;

	while (i <= 9)
	{
		if (i == 9)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar(a + '0' + '\n');
	return (0);
}
