#include "main.h"
/**
 * is_prime_number - check if a number is a prime number
 * @n: input
 * Return: 1 if true 0 if false
 */

int is_prime_number(int n)
{
	int i = 1;
	
	if (n == 0 || n == 1 || n < 0)
	{
		return (0);
	}
	n = is_prime_number(n % i++);
	if (i > 3)
	{
		return (0);
	}
	return (1);
}
