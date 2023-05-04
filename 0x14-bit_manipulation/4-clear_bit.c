#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input number
 * @index: input index
 * Return: 1 if it worked or -1 if a error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	n1 = ~(1UL << index);
	*n  &= n1;
	return (1);
}
