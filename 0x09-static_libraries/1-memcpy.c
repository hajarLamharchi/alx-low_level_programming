#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @n: number of bytes to copy
 * @src: string to copy from
 * @dest: the string to copy in
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
