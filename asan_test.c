#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p = malloc(100);
	free(p);

	*((char *)(p+102)) = 'a';

	return 0;
}
