#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char *ch1 = "abcdefghijklm";
	char *ch2 = "ABCDEFGHIJKLM";
	char *ch3 = "nopqrstuvwxyz";
	char *ch4 = "NOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == ch1[j] || s[i] == ch2[j])
			{
				s[i] += 13;
			}
			else if (s[i] == ch3[j] || s[i] == ch4[j])
			{
				s[i] -= 13;
			}
		}
	}
	return (s);
}
