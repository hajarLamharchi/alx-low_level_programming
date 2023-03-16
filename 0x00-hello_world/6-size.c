#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("char is %2d bytes\n", sizeof(char));
	printf("int is %2d bytes\n", sizeof(int));
	printf("float is %2d bytes\n", sizeof(float));
	printf("long is %2d bytes\n", sizeof(long));
	printf("unsigned char is %2d bytes\n", sizeof(unsigned char));
	printf("unsigned int is %2d bytes\n", sizeof(unsigned int));
	printf("unsigned float is %2d bytes\n", sizeof(unsigned float));
	printf("unsigned long is %2d bytes\n", sizeof(unsigned long));
	return (0);
}
