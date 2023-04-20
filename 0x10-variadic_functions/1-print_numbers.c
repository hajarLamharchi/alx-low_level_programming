#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: character to separate numbers
 * @n: number of numbers to print
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	
	va_start(ap, n);
	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s ", va_arg(ap, int), separator);
		}
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
