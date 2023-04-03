#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (strlen(src) < n)
	{
		char tmp;

		tmp = *src;
		*src = *dest;
		*dest = tmp;
	}
	return (dest);
}
