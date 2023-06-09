#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j, k, len = 0;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	if (len >= n)
	{
		for (j = 0; j < n; j++)
			dest[j] = src[j];
	}
	else
	{
		for (k = 0; src[k] != '\0'; k++)
			dest[k] = src[k];
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
	}
	return (dest);
}
