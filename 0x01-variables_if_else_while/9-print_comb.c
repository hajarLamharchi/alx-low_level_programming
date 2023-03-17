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

	while (i <= 8)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(a + '\n');
	return (0);
}
