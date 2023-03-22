#include <stdio.h>
/**
 * main - sum of even valued terms in febunacci
 *
 * Return: always 0 success
 */
int main(void)
{
	unsigned long sum = 0;
	unsigned long x = 1;
	unsigned long y = 2;
	unsigned long z = 0;

	while (z < 4000000)
	{
		if (y % 2 == 0)
		{
			sum = sum + y;
		}
		z = x + y;
		x = y;
		y = z;
	}
	printf("%lu\n", sum);
	return (0);
}
