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
	int **ptr, i, j;

	ptr = malloc(sizeof(int) * (width + 1) * (height + 1));
	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			width = 0;
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);
}
