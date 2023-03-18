#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*these are standard input and output headers above*/

/*main fumction - programs entry point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if
		printf("%d is negative", n);
	else 
		prontf("%d is zero", n);
	return (0);
}
