#include <stdio.h>
#include <stdlib.h>

char* malloc_100()
{
	return malloc(100);
}

void free_100(char *p)
{
	free(p);
	*p = 'a';
}
