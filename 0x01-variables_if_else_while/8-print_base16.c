#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
