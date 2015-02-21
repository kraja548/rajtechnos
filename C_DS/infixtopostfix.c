#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"arrayStack.h"

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}

main()
{
	char s[]="(a*b)/(c+d)";	
	int len=strlen(s);
	struct arrayStack *stack = createStack(len);
	if(!stack)
		printf("error");
	int i,k;
	for(i=0,k=-1;i<len;i++)
	{	
		if(isOperand(s[i]))
			s[++k]=s[i];
		else if(s[i]=='(')
			push(stack,s[i]);
		else if(s[i]==')')
		{
			while(!isEmpty(stack)&&topMost(stack)!='(')
			{
				s[++k]=pop(stack);
			}
			if(!isEmpty(stack)&&topMost(stack)!='(')
				return -1;
			else
				pop(stack);
			
		}
		else
	        {
        	    while (!isEmpty(stack) && Prec(s[i]) <= Prec(topMost(stack)))
        	        s[++k] = pop(stack);
	            push(stack,s[i]);
        	}
	}
	 while (!isEmpty(stack))
        s[++k] = pop(stack);
 
    s[++k] = '\0';
    printf( "%s\n",s);	
}
