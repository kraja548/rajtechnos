#include<stdio.h>
#include<stdlib.h>
struct stsll
{
	int item;
	struct stsll *next;
}*head=NULL;
void push(int n)
{
	struct stsll *list;	
	list=(struct stsll *)malloc(sizeof(struct stsll));
	list->item=n;	
	if(head==NULL)
	{
		list->next=head;		
		head=list;		
	}
	else
	{
		list->next=head;
		head=list;
		
	}
}
int pop()
{
	int k;	
	struct stsll *temp1=NULL;
	temp1=head;	
	if(temp1==NULL)
		return 0;	
	else
	{		
		k=temp1->item;
		head=temp1->next;		
		return k;
	}
	
}
void display()
{
	struct stsll *temp;
	temp=head;
	if(temp==NULL)
		printf("*** Stack is empty..!!\n");	
	while(temp!=NULL)
	{
		printf("%d\n",temp->item);
		temp=temp->next;
	}	
}
main()
{
	int ch,element,popelement;
	struct stsll *list,*curr=0;
	while(1)
	{	
		printf("1.push\n2.pop\n3.display\n4.Exit\n");		
		printf("\nEnter your choice\t:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value to push\t:");
				scanf("%d",&element);
				push(element);
				break;
			case 2: popelement=pop();
				if(popelement==0)
					printf("****Stack is empty...!!:\n");
				else
					printf("the popped element is \t:%d\n",popelement);			
				break;
			case 3: display();
				break;
			case 4: exit(0);
		

		}
	}
	
}
