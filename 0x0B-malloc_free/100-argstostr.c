#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: arguments count
 * @av: arguments vector
 * Return: pointer to a new string
 * NULL if it fails or ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	unsigned long int k;
	char **ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * ac + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		ptr[i] = malloc(sizeof(char *) * strlen(av[i]));
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
		}
		free(ptr);
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < strlen(ptr[k]); k++)
		{
			*(ptr + j) = *(av + j + k);
		}
	}
	return (*ptr);
}
