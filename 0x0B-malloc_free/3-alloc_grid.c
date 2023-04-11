#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a two dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: 2D array of 0 and NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		ptr[k] = malloc(sizeof(int) * width);
		if (ptr[k] == NULL)
		{
			for (; k >= 0; k--)
			{
				free(ptr[k]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
