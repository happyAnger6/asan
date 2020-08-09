#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *p = malloc(100);
	memset(p, 0, 200);

	return 0;
}
