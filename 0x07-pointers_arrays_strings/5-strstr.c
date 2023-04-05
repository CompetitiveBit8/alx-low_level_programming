#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *var;

	if(*haystack != '\0')
	{
		if(*haystack == *needle)
			*var = *haystack++;
	}
	return(var);
}		
