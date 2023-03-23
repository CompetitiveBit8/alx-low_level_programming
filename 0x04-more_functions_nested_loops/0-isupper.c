#include "main.h"

/**
 * _isupper - finds uppercase character
 * @c: character to check
 * Return: this returns 0 when true and 1 when false
 */

int _isupper(int c)
{
if (c > "A" && c < "Z")
	return (1);
else
	return (0);
}
