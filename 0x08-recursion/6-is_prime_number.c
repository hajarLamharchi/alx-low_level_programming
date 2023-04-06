#include "main.h"
/**
 * is_prime_number - check if a number is a prime number
 * @n: input
 * Return: 1 if true 0 if false
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
	{
		return (0);
	}
	else
	{
	return (check(n, n / 2));
	}
}

/**
 * check - check in f is prime
 * @n: first input
 * @i: second input
 * Return: 1 if true 0 if false
 */
int check(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (check(n, i - 1));
		}
	}
}
