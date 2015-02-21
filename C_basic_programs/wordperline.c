/*
Write a program that prints its input one word per line.
*/
#include<stdio.h>
main()
{
	int c,flag=0;
	while((c=getchar())!=EOF)
	{
		if(c==' '|c== '\t'|c=='\n')
		{			
			if(flag==0){			
			printf("\n");
			flag=1;}
		}
		
		else{flag=0;putchar(c);}			
	} 
}
