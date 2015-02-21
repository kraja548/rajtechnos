#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"arrayStack.h"

int isNumber(char s)
{    
    s=s-'0';
    return (s>0&&s<9);
}

main()
{
    char expr[]="2*4+8-2";
    int i,len=strlen(expr);
    char str;
    int count=0,val1,val2;
    struct arrayStack *stack=createStack(len);
    for(i=0;i<len;i++)
    {
	if(isNumber(expr[i]))
	{
	  push(stack,expr[i]-'0');
	  ++count;
	}
	else
	{
	  str=expr[i];	  
	}
	if(count==2)
	{
	  count=0;
	  switch(str)
	  {
	    case '+':
		      val1=pop(stack);
		      val2=pop(stack);
		      printf("%d%c%d\n",val1,str,val2);
		      push(stack,(val2+val1));
		      ++count;
		      break;
	    case '-':
		      val1=pop(stack);
		      val2=pop(stack);
		      printf("%d%c%d\n",val1,str,val2);
		      push(stack,(val2-val1));
		      break;
	    case '*':
		      val1=pop(stack);
		      val2=pop(stack);
		      printf("%d%c%d\n",val2,str,val1);
		      push(stack,(val2*val1));
		      ++count;
		      break;
	    case '/':
		      val1=pop(stack);
		      val2=pop(stack);
		      printf("%d%c%d\n",val1,str,val2);
		      push(stack,(val2/val1));
		      ++count;
		      break;
	    default:
		      printf("Error");
		      exit(0);
	  }
	}	
    }
    printf("final result is %d",pop(stack));
}

