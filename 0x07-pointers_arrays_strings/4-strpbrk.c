#include "main.h"

/**
 * _strpbrk - function searches string for any set of value
 *
 * @s: string yo traverse
 *
 * return NULL or 1
 *
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)

			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
