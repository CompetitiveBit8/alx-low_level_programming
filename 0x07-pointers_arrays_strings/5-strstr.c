#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *var;

	while(*haystach != '\0')
	{
		if(*haystack == *needle)
			*var = *haystack +  1;
	}
	return(var);
}		
