#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: integer input
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	n = _sqrt_recursion(n - (i + 2));
	return ((i + 1) / 2);
}