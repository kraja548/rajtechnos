#include<stdio.h>
struct sll *c=0;
struct sll
{
	int n;
	struct sll *next;
}*head=NULL;
void insert(struct sll *ele,int num)
{
	ele=(struct sll*)malloc(sizeof(struct sll));
	ele->next=NULL;
	ele->n=num;
	
	if(head==NULL)
	{
		printf("here is the bug");
		head=ele;
		head=ele;
	}
	else
	{
		printf("here is the bug2");
		c->next=ele;
		c=ele;
	}	
}
void display(struct sll *ele)
{
	ele=head;
	printf("The elements in the list\n");
	while(ele)
	{
	printf("%d\t",ele->n);	
	ele=ele->next;
	}	
}

main()
{
	int element,ch;
	struct sll *list,*c=0;
	printf("Enter your choice\n");
	while(1){
	printf("1.insert\n2.diplay\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter element");
				scanf("%d",&element);
				insert(list,element);
				break;
		case 2: printf("Elements are\t");
				display(list);
				break;
		default : exit(1);
							
	}
   }
	
}	
