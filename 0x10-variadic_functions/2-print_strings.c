#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: char to separate the strings
 * @n: number of strings to print
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(ap, char *));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
