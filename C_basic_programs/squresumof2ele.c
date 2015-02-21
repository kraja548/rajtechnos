/*
 * give the index values such that (a[i])^2 + (a[j])^2= (a[k])^2
 */
#include<stdio.h>
main()
{
	int a[]={2,4,7,3,5,8};
	int i,j,k;
	for(i=0;i<6;i++)
	{
		a[i]=a[i]*a[i];
	}
	for(i=0;i<6;i++)
	{
		for(j=i;j<6;j++)
		{
			for(k=0;k<6;k++)
				{
					if(a[i]+a[j]==a[k])
		  			{
						printf("%d-%d-%d\n",i,j,k);
						break;
			  		}
				}
		}
			
	}
	
}