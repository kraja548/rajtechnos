#include<stdio.h>
struct stack
{
	int arr[10];
	int top;
}st;
void push(int n)
{	
	st.arr[st.top++]=n;
}
int pop()
{
	int k;
	k=st.arr[st.top];
	st.top--;
	return k;
}
int isFull()
{
	if(st.top==10)
		return 1;
	else 
		return 0;
}
void display()
{printf("---------------------");
	int i;
	for(i=st.top;i<=0;i--){
		printf("|%d|\n",st.arr[i]);
		printf("---\n");}
}
int isEmpty()
{
	if(st.top==-1)
		return 1;
	else 
		return 0;
}

main()
{
	int n,ch,element;
	st.top=-1;
	printf("Enter your choice:\t");
   while(1)
     {	
	printf("1.PUSH\n2.POP\n3.DISPLAY\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: scanf("%d",&n);
			if(isFull())
				printf("stack is full\n");
			else			
				push(n);
			break;
		case 2: if(isEmpty())
				printf("stack is empty\n");
			else{
				element=pop();
				printf("Popped element is\t:%d",element);
			    }	
			break;
		case 3: if(isEmpty())
				printf("stack is empty\n");
			else
				display();
			break;
		
			
	}
     }
}
