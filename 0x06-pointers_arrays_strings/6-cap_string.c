#include "main.h"
/**
 * cap_string - capitalizes all words of the string
 * @s: input string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' ||
				s[i] == '\t' ||
				s[i] == '\n' ||
				s[i] == ',' ||
				s[i] == ';' ||
				s[i] == '.' ||
				s[i] == '!' ||
				s[i] == '?' ||
				s[i] == '"' ||
				s[i] == '(' ||
				s[i] == ')' ||
				s[i] == '{' ||
				s[i] == '}')
		{
			s[i + 1] -= 32;
		}
	}
	return (s);
}
