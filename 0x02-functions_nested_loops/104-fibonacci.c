#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: Always 0 success
 */

int main(void)
{
	int count = 3;

	unsigned double x = 1, y = 2, z = 0;

	printf("1, 2, ");
	while (count < 98)
	{
		z = x + y;
		x = y;
		y = z;
		count++;
		printf("%0Lf, ", z);
	}
	printf("%0Lf\n", x + y);
	return (0);
}
