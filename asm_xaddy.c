#include<stdio.h>

int main()
{
	unsigned int val1 = 1;
	unsigned int val2 = 2;
	unsigned int val3 = 0;
	asm volatile(
			"movl $0, %%eax\n\t"
			"addl %1, %%eax\n\t"
			"addl %2, %%eax\n\t"
			"movl %%eax, %0\n\t"
			:"=m"(val3)
			:"b"(val1),"c"(val2)
			);
	printf("1 + 2 = %d\n", val3);
	return 0;
}
