#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array and initialize it with a character
 * @size: size of array
 * @c: character input
 * Return: pointer to the array and NULL if size=0 or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	*ptr = c;
	return (ptr);
}
