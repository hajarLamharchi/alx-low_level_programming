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
		while (cent != 0)
		{
			if (cent >= 25)
			{
				cent -= 25;
				n++;
			}
			else if (cent < 25 && cent >= 10)
			{
				cent -= 10;
				n++;
			}
			else if (cent < 10 && cent >= 5)
			{
				cent -= 5;
				n++;
			}
			else if (cent < 5 && cent >= 2)
			{
				cent -= 2;
				n++;
			}
			else if (cent < 2 && cent >= 1)
			{
				cent -= 1;
				n++;
			}
		}
		printf("%d\n", n);
	}
	return (0);
}
