#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s1[] = "and that piece of art is useful\" ";
	char s2[] = "- Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s%s", s1, s2);
	return (1);
}
