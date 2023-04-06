#include "main.h"
/**
 * wildcmp - compares two stringes
 * @s1: first input
 * @s2: second input
 * Return: 1 if true 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	if (*(s1 + i) == '\0' || *(s2 + j) == '\0')
	{
		return (1);
	}
	if (*(s1 + i) != *(s2 + j))
	{
		return (0);
	}
	return (wildcmp(*(s1 + i + 1), *(s2 + j + 1)));
}
