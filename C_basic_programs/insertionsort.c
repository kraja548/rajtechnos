#include<stdio.h>
void insertionsort(int list[], int size)
{
	int temp,value,i,j;
	for(i=1;i<size;i++)
	{
		value=list[i];
		temp=i;
		while(temp>0 && list[temp-1]>value)
		{
			list[temp]=list[temp-1];
			temp--;
		}
		list[temp]=value;
	}
}
main()
{
	int list[30],i,size;
	printf("Enter the arry size :");
	scanf("%d",&size);
	printf("\nEnter elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&list[i]);
	}
	insertionsort(list,size);
	for(i=0;i<size;i++)
	{
		printf("%d\t",list[i]);
	}
}