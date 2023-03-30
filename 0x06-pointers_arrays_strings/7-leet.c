#include "main.h"
/**
 * leet - encode a string into 1337
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char ch1[] = {'a', 'e', 'o', 't', 'l'};
	char ch2[] = {'A', 'E', 'O', 'T', 'L'};
	char ch3[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == ch1[j] || s[i] == ch2[j])
			{
				s[i] = ch3[j];
			}
		}
	}
	return (s);
}
