#include "main.h"
/**
 * _strncpy - copy n bytes of src into dest
 * @dest: first input
 * @src: second input
 * @n: number of bytes to copy
 * Return: the pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
