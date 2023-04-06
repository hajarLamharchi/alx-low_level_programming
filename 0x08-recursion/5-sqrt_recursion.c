#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: integer input
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (function(n, 1));
}

/**
 * function - help with finding the sqrt
 * @n: input value
 * @i: input value
 * Return: integer
 */
int function(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return ((i - 1) / 2);
	}
	else
	{
		return (function(n - i, i + 2));
	}
	return (0);
}
