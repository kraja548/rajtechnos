#include<stdio.h>
#include<stdlib.h>
struct sll
{
	int n;
	struct sll *next;
}*head=NULL;
void display()
    {
		struct sll *list1;
		list1=head;
		while(list1!=NULL)
		{
			printf("%d\t",list1->n);	
			list1=list1->next;
		}
    }
main()
{
	int element,ch;
	struct sll *list,*c=0;
	while(1)
	{
		printf("Enter element : \t");		
		list=(struct sll*)malloc(sizeof(struct sll));
		scanf("%d",&list->n);
		if(list->n==0)
			break;
		list->next=NULL;
		if(head==NULL)
		{
			head=list;
			c=list;	
		}
		else		
		{
			c->next=list;
			c=list;
		}		
	}
	list=head;
    printf("The elements in the list\n");
    display();
	printf("\nwant to reverese the list\t (1/0)");
    scanf("%d",&ch);
	if(ch)
	{
		struct sll *p,*q,*r,*disp;
		int count=0;
		p=head;
		q=NULL;
		while(p!=NULL)
		{
			r=q;
			q=p;
			p=p->next;
			q->next=r;
		}
		head=q;
		display();
	}
	else
		printf("no");    
		
}
