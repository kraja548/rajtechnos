#include<stdio.h>
main()
{
	int *p;
	int x=5;
	int k[]={1,12,23};
	//p=&x;	
	p=k;
	//printf("%d\n",++*p);	
	printf("%d\n",*p++);
	printf("%d\n",*p);
}
