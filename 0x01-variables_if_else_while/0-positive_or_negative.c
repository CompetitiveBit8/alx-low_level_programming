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
		printf("is positive");
	else
		printf("is negative");
	return (0);
}
