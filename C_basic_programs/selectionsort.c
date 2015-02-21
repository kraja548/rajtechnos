#include<stdio.h>
void selectionsort(int list[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		int imin=i;
		for(j=i+1;j<size;j++)
		{
			if(list[j]<list[imin])
				{imin=j;}			
		}
		temp=list[i];
		list[i]=list[imin];
		list[imin]=temp;
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
	selectionsort(list,size);
	for(i=0;i<size;i++)
	{
		printf("%d\t",list[i]);
	}
}
