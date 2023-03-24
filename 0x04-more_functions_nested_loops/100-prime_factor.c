#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long i, large;
	unsigned long n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0 && i > large)
		{
			large = i;
		}
	}
	printf("%lu\n", large);
	return (0);
}
