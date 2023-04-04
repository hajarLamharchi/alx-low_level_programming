#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the diagonals of matrix
 * @a: matrix input
 * @size: size of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
			sum1 += *a[i][i];
			sum2 += *a[i][size - i];
	}
	printf("%d, %d", sum1, sum2);
}
