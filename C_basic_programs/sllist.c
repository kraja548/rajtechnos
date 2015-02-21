#include<stdio.h>
struct sll
{
	int n;
	struct sll *next;
}*head=NULL;
main()
{
	int element;
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
	while(list)
	{
	printf("%d\t",list->n);	
	list=list->next;
	}	
}