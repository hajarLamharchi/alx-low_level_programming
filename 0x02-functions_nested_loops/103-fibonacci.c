#include <stdio.h>
/**
 * main - sum of even valued terms in febunacci
 *
 * Return: always 0 success
 */
int main(void)
{
	int i = 2;
	unsigned long sum = 1;
	unsigned long t[100];

	t[0] = 1;
	t[1] = 2;
	while (t[i] < 4000000)
	{
		if (i % 2 == 0)
		{
			sum = sum + t[i];
		}
		t[i] = t[i - 1] + t[i - 2];
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
