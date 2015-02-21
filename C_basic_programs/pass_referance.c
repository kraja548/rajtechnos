#include<stdio.h>
void sort(int a[],int n)
{
	
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
  sort(list,size);
  
  for(i=0;i<size;i++)
  {
  	printf("%d\t",list[i]);
  }
}