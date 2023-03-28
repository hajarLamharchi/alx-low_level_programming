#include "main.h"
/**
 * _strcpy - copies the string pointed by src to the one pointed by dest
 * @src: the sting to copy
 * @dest: where to copy src
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
