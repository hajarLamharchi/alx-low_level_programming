#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: input number
 * @index: input index
 * Return: 1 if it worked or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	n1 = 1UL << index;
	*n |= n1;
	return (1);
}
