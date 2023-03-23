#include "main.h"

/**
 * _isdigit - checks if digit is gtrater than 9
 * @c: character to check
 * Return: returns 0 or 1
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
