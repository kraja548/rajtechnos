#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"arrayStack.h"

main()
{
	//char s[]={'r','a','j','a','k'};
	char s[]="(a*b)/(c+d)";
	char l;
	int i;
	int len=strlen(s);
	struct arrayStack *stack = createStack(len);
	if(!stack)
		printf("error");
	for(i=0;i<len;i++)
	{
	  push(stack,s[i]);
	}
	l=pop(stack);
	dispalyArrStack(stack);
	
	
}
