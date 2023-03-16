#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("char is %zu bytes\n", sizeof(char));
	printf("int is %zu bytes\n", sizeof(int));
	printf("float is %zu bytes\n", sizeof(float));
	printf("double is %zu bytes\n", sizeof(double));
	return (0);
}
