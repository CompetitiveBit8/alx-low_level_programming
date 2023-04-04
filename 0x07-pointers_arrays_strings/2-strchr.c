#include "main.h"

char *_strchr(char *s, char c)

/**
 * _strchr - locates character in string
 *
 * @c: is the variable containing the character
 *
 * *s: is the pointer variable to search through
 *
 * return  0 or 1
 */

{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
