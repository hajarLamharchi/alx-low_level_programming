#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of coins to make change for an amount of money
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int change[] = {25, 10, 5, 2};
	int n = 0;
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (cent % change[i] == 0)
		{
			if (cent % change[i] != 0)
			{
				i++;
			}
			else
			{
				n++;
			}
		}
		printf("%d\n", n);
	}
	return (0);
}
