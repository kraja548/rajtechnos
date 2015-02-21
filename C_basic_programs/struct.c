#include<stdio.h>
struct mystruct
{
	char name[20];
	int no;
}ms;
main()
{
	struct mystruct ms[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s%d",ms[i].name,&ms[i].no);	
	}
	
	printf("---------------------------\n");
	printf("N0\t|  Name\n");
	printf("---------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t|  %s\n",ms[i].no,&ms[i].name);	
	}
	printf("---------------------------\n");
}