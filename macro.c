#include<stdio.h>

int f()
{
#ifndef MACRO_H
	printf("MACRO_H\n");
#endif
	return 0;
}

int main()
{
	f();
	return 0;
}
