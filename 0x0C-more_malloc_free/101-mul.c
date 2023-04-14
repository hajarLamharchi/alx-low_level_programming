#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - calculate the multiplication of two numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned long int *mul, num1, num2;
	unsigned long int len, len1, len2;
	int i, j, test = 0;

	num1 = *argv[1];
	num2 = *argv[2];
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; *argv[j] != '\0'; j++)
		{
			if (!(isdigit(*argv[j])))
			{
				test = 1;
			}
		}
	}
	if (test == 1)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = strlen((char *)num1);
	len2 = strlen((char *)num2);
	len = len1 + len2 + 1;
	mul = malloc(sizeof(int) * len);
	if (mul == NULL)
	{
		return (1);
	}
	*mul = num1 * num2;
	printf("%lu\n", *mul);
	return (0);
}
