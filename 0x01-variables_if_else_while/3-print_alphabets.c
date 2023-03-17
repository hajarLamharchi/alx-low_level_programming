#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c1 = 'a';
	char c2 = 'A';

	while (c1 <= 122)
	{
		putchar(c1);
		c1++;
	}

	while (c2 <= 90)
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
