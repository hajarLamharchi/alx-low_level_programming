#include <stdio.h>

/**
 * main - FizzBuzz test
 * print numbers from 1 to 100 Fizz for multiples of 3 Buzz for multiples of 5
 * and FizzBuzz for multiples of both
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
