#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: input number
 * @index: index input
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n1;
	int value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	n1 = n >> index;
	value = n1 & 1;
	return (value);
}
