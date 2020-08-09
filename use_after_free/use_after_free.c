#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p = malloc(100);
	*p = 'a';
	free(p);
	return p[10];
}
