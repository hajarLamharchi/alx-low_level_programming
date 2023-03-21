#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints the numbers from n to 98
 *
 * @n: function argument
 *
 * Return: Always 0 success
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		{
		if (n < 10)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d, ", n);
		}
		}
		if (n > 98)
			n++;
		else if (n < 98)
			n--;
		else
		{
			printf("98\n");
		}
	}
}


