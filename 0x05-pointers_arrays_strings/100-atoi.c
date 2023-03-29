#include "main.h"
/**
 * _atoi - convert a string into an integer
 * @s: the string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int index = 0;
	int i = 0, j, k, d = 0;
	unsigned int n = 0;

	while (s[i] < 48 && s[i] > 57)
	{
		index++;
		i++;
	}
	for (j = 0; j < index; j++)
	{
		if (s[j] == '-')
			d++;
	}
	k = index;
	while (s[k] >= 48 && s[k] <= 57)
	{
		n = n * 10 + s[k];
	}
	if (d % 2 != 0)
	{
		n = -n;
	}
	return (n);
}
