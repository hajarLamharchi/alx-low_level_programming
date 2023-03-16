#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s1[100] = "and that piece of art is useful\" ";
	char s2[100] = "- Dora Korpar, 2015-10-19";
	char s3[100] = strcat(s1, s2);

	fprintf(stderr, s3);
	return (1);
}
