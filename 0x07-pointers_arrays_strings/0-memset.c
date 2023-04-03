#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer that point at the memory area
 * @b: the constant to print
 * @n: the number of bytes to fill
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
