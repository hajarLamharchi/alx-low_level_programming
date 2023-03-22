#include <stdio.h>
/**
 * main - print the fibonacci numbers
 *
 * Return: always 0 success
 */

int main(void)
{
	int i = 2;
	int t[50];

	t[0] = 1;
	t[1] = 2;
	printf("1, 2, ");
	while (i < 50)
	{
		t[i] = t[i - 1] + t[i - 2];
		printf("%d, ", t[i]);
		i++;
	}
	return (0);
}

