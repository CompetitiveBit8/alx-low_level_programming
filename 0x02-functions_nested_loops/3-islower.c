#include "main.h"

/**
 *_islower - function checks if char is lowercase
 *@c: is the parameter to check
 *Return: 1 if a character is lowercase, otherwise 0
 */
int _islower(int c)
	{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}
