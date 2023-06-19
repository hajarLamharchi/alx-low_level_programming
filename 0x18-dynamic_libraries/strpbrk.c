#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p;

	p = NULL;
	while (*s != '\0' && p == NULL)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				p = s;
				break;
			}
		}
		s++;
	}
	return (p);
}
