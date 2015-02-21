#include<stdio.h>
int add(int x, int y)
{
	//printf("%*c%*c",  x, ' ',  y, ' ');    
	return printf("%*c%*c",  x, '\r',  y, '\r');
}
 
int main()
{
	int a=1000,k,l,r=5,s=10,t;    
	printf("Sum = %d", add(3, 4));
	printf("\n");    	
	k=printf("%*c%*c",r,' ',s,' ');
	printf("\n");
	printf("%d--",k);
	printf("\n");
	l=printf("%d",a);
	printf("\n");
	printf("%d",l);
	printf("\n");
	t=printf("%d%d",r,s);
	printf("-->%d",t);	
	printf("\n");
    return 0;
}
