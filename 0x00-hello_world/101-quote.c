#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s1[100] = "and that piece of art is useful\" ";
	char s2[100] = "- Dora Korpar, 2015-10-19";

	strcat(s1, s2);
	fprintf(stderr, s1);
	return (1);
}
