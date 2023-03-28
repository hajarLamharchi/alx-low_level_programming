#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @s: the string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int len = 0;
	int j;
	int k;
	int d = 0;
	unsigned int n = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; j < len ; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			n = n * 10 + s[j];
		}
	}
	for (k = 0; k < len; k++)
	{
		if (s[k] == '-')
			d++;
	}
	if (d % 2 != 0)
	{
		n = -n;
	}
	return (n);
}
