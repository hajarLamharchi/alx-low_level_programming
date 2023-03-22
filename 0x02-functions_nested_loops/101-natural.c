#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: the sum f natural numbers multiples of 3 and 5
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d", sum);
	return (0);
}
