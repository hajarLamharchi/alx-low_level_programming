#include "main.h"
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}
