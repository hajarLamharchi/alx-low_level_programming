#include "main.h"
/**
 * cap_string - capitalizes all words of the string
 * @s: input string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	char *ch = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 13; j++)
		{
			if (s[i] == ch[j])
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
