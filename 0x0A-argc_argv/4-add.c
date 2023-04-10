#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int n;
	char *ptr;
	int add = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		n = strtol(argv[i], &ptr, 10);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += n;
		}
	}
	printf("%d\n", add);
	return (0);
}
