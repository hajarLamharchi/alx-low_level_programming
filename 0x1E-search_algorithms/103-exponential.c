#include "search_algos.h"

int _binary_search(int *array, int left, int right, int value);
int min(int a, int b);

/**
 * exponential_search - searches for a value in a sorted array
 * using exponential search algorithm
 * @array: points to the first element of the array
 * @size: size of the array
 * @value: the value to search for
 * Return: first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%ld] and [%d]\n",
		i / 2, min(i, size - 1));
	return (_binary_search(array, i / 2, min(i, size - 1), value));
}

/**
 * _binary_search - modified version of binary search
 * @array: points to the first element of the array
 * @left: left value
 * @right: right value
 * @value: the value to search for
 * Return: first index where value is located
 */
int _binary_search(int *array, int left, int right, int value)
{
	int m, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
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

/**
 * min - returns the minimun of a and b
 * @a: first value
 * @b: second value
 * Return: minimum of a and b
 */
int min(int a, int b)
{
	return ((a > b) ? b : a);
}
