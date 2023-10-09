#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: points to the array
 * @size: size of the array
 * @value: value to searche for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m, i;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%ld, ", i);
		}
		printf("%ld\n", i);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
