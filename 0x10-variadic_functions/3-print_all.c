#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
				{
					printf("(nil)");
				}
				printf("%s", str);
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
			printf(",");
		i++;
		}
	printf("\n");
	va_end(ap);
}
