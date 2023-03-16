#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("size of float: %zu byte(s)\n", sizeof(float));
	printf("size of double: %zu byte(s)\n", sizeof(double));
	return (0);
}
