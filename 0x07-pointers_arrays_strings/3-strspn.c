#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: input string
 * @accept: bytes to compare with
 * Return: number of bytes that consiste of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i = 0, j;

	while ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len += 1;
			}
		}
		i++;
	}
	return (len);
}
