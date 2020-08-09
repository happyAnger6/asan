#include <stdio.h>
#include <stdlib.h>

#include <asan_mem.h>

int main()
{
	char *p = malloc_100();
	*p = 'a';
	free_100(p);
	return 0;
}
