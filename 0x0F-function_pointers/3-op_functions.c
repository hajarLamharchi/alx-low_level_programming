#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: first int
 * @b: second int
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: first int
 * @b: second int
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two integers
 * @a: first int
 * @b: second int
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: first int
 * @b: second int
 * Return: a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division of two integers
 * @a: first int
 * @b: second int
 * Return: a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
