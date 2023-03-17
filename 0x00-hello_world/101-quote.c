#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s1[100], s2[100];

	s1 = "and that piece of art is useful\" ";
	s2 = "- Dora Korpar, 2015-10-19\n";
	strcat(s1, s2);
	fprintf(stderr, "%s", s1);
	return (1);
}
