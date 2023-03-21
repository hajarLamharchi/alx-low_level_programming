#include "main.h"

/**
 * _islower - checks if a character is lowercase.
 *
 * @c:  function argument ASCII code
 *
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
