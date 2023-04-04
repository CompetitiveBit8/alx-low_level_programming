#include "main.h"

/**
 * _strspn - functiom gets the length of a prefix substring
 *
 * @s: string to search
 *
 * @accept: characters thay are acceptabke as substring
 * returns 0 or 1
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0' && *p != *s)
		{
			p++;
		}
		if (*p == '\0')
		{
			return (len);
		}
		len++;
		s++;
	}
	return (len);
}
