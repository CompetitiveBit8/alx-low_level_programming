#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: the char to be checked
 *
 * Return: 1 if the character is lower or upper, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
