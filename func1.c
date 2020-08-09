#include <stdio.h>
#include <stdlib.h>

extern void func2(char*);

int func()
{
	char *s1 = "hello";
	printf("hello: [%s]\r\n", s1);

	func2(s1);

	return 0;
}
