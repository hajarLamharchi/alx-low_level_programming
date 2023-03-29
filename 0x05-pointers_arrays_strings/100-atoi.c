#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string into an integer
 * @s: the string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int index = 0;
	int i, j, k, d = 0;
	float n = 0;
	int ord;
	int len;
	int digit;
	
	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		index = i;
		ord = s[i];
		if (ord >= 48  && ord <= 57)
			break;
	}
	for (j = 0; j <= index; j++)
	{
		if (s[j] == '-')
		{
			d++;
		}
	}
	for (k = index; k < len; k++)
	{
		digit = s[k] - '0';
		ord = s[k];
	if (ord < 48 && ord > 57)
	break;
	else
	n = n * 10 + digit;
	}
	if (d % 2 != 0)
		n = -n;
	return (n);
}
