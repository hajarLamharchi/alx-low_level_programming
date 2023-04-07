#include "main.h"

/**
 * _isalpha - checks if the caracter is a letter
 *
 * @c: function arguments int
 *
 * Return: 1 if c is letter lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	else
		return (0);
}
