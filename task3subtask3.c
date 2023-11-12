#include <stdio.h>
#define N 10

int main(void)
{
	int Array[N], i;
	int *p;
	for(i=0; i<10; i++)
	{
		Array[i]=i+1;
	}
	p=Array;
	for(i=0; i<10; i++)
	{
		printf("%d elem: %d\n",i+1,*p);
		p++;
	}
}
