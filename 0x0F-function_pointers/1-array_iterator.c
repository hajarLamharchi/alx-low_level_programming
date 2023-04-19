#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @array: array input
 * @size: size of the array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
