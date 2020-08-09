#include <stdio.h>
#include <stdlib.h>

int free_p(char *p)
{
	free(p);
}

int main()
{
	char *p = malloc(100);
	free_p(p);

	free(p);
}
