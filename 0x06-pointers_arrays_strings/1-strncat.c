#include "main.h"
/**
 * _strncat - concatenate dest and n bytes from src
 * @dest: first input
 * @src: second input
 * @n: number of bytes to concatenate
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, i = 0, j = 0, len = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		len++;
		j++;
	}
	if (len >= n)
	{
		for (l = 0; l < n; l++)
		{
			dest[i] = src[l];
			i++;
		}
	}
	else
	{
		while (src[k] != '\0')
		{
			dest[i] = src[k];
			i++;
			k++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
