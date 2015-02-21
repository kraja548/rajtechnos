/*
number of words,lines,characters
*/
#include<stdio.h>
main()
{
	int nl,nc,nw,flag=1;
	char c;	
	nl=nc=nw=0;
	while((c=getchar())!=EOF)
	{
		++nc;
		if(c=='\n')
			++nl;
		if(c==' '| c=='\t' | c=='\n')
			flag=0;
		else if(flag==0)
			{++nw;
			flag=1;}
	}
	printf("nc=%d\nnl=%d\nnw=%d",(nc-nw-1),nl,nw+1);
	
}
