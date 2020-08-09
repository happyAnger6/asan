#include <stdio.h>
#include <stdlib.h>

int func2(char *s)
{

	*(s + 100) = 'b';
	return 0;
}
