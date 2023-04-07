#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * @i: integer argument
 *
 * Return: absolute value
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
