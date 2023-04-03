#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}

	return (s);
}
