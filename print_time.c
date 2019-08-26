#include<stdio.h>
#include<time.h>

int main()
{
	time_t tt;
	tt = time(NULL);
	struct tm *t;
	t = localtime(&tt);
	printf("%d:%d;%d;%d;%d\n", t->tm_year+1900,t->tm_mon,t->tm_mday,t->tm_hour);
	return 0;
}
