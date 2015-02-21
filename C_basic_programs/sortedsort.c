#include<stdio.h>
mergelists(int llist[], int rlist[],int flist[])
{
	int l,r,i=0,j=0,k=0,n;
	l=sizeof(llist)/sizeof(int);
	r=sizeof(rlist)/sizeof(int);
	n=sizeof(flist)/sizeof(int);
	while(i<l || j<r)
	{
		if(llist[i]<=rlist[j])
		{
			flist[k]=llist[i];
			i++;
		}
		else
		{
			flist[k]=rlist[j];
			j++;			
		}
		k++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",flist[i]);
	}
}
void mergesort(int list[],int n)
{
int n,mid,i;
mid=n/2;
printf("\n%d",n);
int left[mid],right[n-mid];

if(n<2)
 return list;
 
 for(i=0;i<mid;i++)
 {
 left[i]=list[i];	
 }
 for(i=mid;i<n-1;i++)
 {
 	right[i-mid]=list[mid];
 }	
 mergesort(left,mid);
 mergesort(right,);
 mergelists(left,right,list);
}
main()
{
	int n,i;
	scanf("%d",&n);
	int list[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	mergesort(list,n);
	
}