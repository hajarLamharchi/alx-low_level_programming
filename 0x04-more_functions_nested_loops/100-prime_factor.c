#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long i = 2, large;
	unsigned long n = 612852475143;

	while (n != 1)
	{
		if (n % i != 0)
		{
			i++;
		}
		else
		{
			large = n;
			n = n / i;
		}
		if (n == 1)
		{
			printf("%lu\n", large);
		}
	}
	return (0);
}
