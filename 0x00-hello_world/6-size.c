#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("char is %ld bytes\n", sizeof(char));
	printf("int is %ld bytes\n", sizeof(int));
	printf("float is %ld bytes\n", sizeof(float));
	printf("long is %ld bytes\n", sizeof(long));
	printf("unsigned char is %ld bytes\n", sizeof(unsigned char));
	printf("unsigned int is %ld bytes\n", sizeof(unsigned int));
	printf("unsigned float is %ld bytes\n", sizeof(unsigned float));
	printf("unsigned long is %ld bytes\n", sizeof(unsigned long));
	return (0);
}
