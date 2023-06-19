#include "main.h"
char *_strchr(char *s, char c)
{
	char *p;

	p = NULL;
	while (*s != '\0')
	{
		 if (*s == c)
		 {
			 p = s;
			 break;
		 }
		 else
			 s++;
	}
	return (p);
}
