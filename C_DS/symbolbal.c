#include<stdio.h>
#include"arrayStack.h"
#include<stdlib.h>
#include<string.h>

int isMatched(char str1,char str2)
{
	if(str1=='(' &&str2==')'){printf("() called\n");
		return 1;}
	else if(str1=='[' &&str2==']'){printf("[] called\n");
		return 1;}
 	else if(str1=='{' &&str2=='}'){printf("{} called\n");
		return 1;}
	else
		return 0;
	
}
int isBalanced(struct arrayStack *stack,char s[])
{
	int i;
	for(i=0;i<strlen(s);i++)
	{
	   if(s[i]=='('||s[i]=='['||s[i]=='{')
	     push(stack,s[i]);
	   if(s[i]==')'||s[i]==']'||s[i]=='}')
	   {
	        if(stack==NULL)
		  return 0;
		else if(!isMatched(s[i],pop(stack))){printf("%c\n",topMost(stack));
		  return 0;}
		else
		  return 0;
	   }
	}
	if(stack==NULL)
	    return 1;
	else
	    return 0;
}
main()
{
	char s[]="{([])}";
	int i;
	struct arrayStack *stack = createStack(strlen(s));
	if(!stack)
		printf("Error..!!\n"); 
	if(isBalanced(stack,s))
		printf("Yes...!\n");
	else
		printf("No\n");
}
