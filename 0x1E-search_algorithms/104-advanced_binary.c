#include "search_algos.h"
int _advanced_binary(int *array, int left, int right, int value);

/**
 * advanced_binary - searches for a value in a sorted array
 * using binary search with recursion
 * @array: points to the first element of the array
 * @size: size of the array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (_advanced_binary(array, 0, size - 1, value));
}

/**
 * _advanced_binary - modified version of binary search
 * @array: points to the first element of the array
 * @left: left value
 * @right: right value
 * @value: value to search for
 * Return: first index where value is located
 */
int _advanced_binary(int *array, int left, int right, int value)
{
	int m, i = left;

	printf("Searching in array: ");
	while (i < right)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);

	if (right > left)
	{
		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);

		if (array[m] > value)
			return (_advanced_binary(array, left, m - 1, value));
		return (_advanced_binary(array, m + 1, right, value));
	}
	return (-1);
}
