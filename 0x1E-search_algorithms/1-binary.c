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
	size_t left = 0;
	size_t right = size - 1;
	size_t m, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			left = m + 1;
		else
			right = m - 1;
	}
	return (-1);
}
