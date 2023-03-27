#include "main.h"

/**
 * swap_int - function swaps the value of two integers
 *
 * @a: this the first value
 * @b: this is the second value
 * returns 1 or 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
