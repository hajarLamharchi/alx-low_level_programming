#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: points to the first element of the array
 * @size: size of the array
 * @value: the value to search
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t)(sqrt(size));
	size_t prev = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
			break;
		prev = i;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);

	for (i = prev; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
