#include<stdio.h>
struct linkedlist
{
	int data;
	struct linkedlist *next;
}*head=NULL;

main()
{
	int element;
	struct linkedlist *list,*temp,*cur;
	while(1)
	{
		printf("Enter element:\t");
		scanf("%d",&element);
		if(element==0)
			break;
		temp=(struct linkedlist *)malloc(sizeof(struct linkedlist));
		if(head==NULL)
		{
			temp->data=element;
			temp->next=NULL;
			head=temp;	
		}
		else
		{
			list=head;
			temp->data=element;			
			while(list!=NULL)
			{
				if( (list->data < element )&& list==head)
				{
					temp->data=element;
					temp->next=head;
					head=temp;
				}
							
				list=list->next;	
			}
			
		}	
	}
	cur=head;
	while(cur!=NULL)
	{
		printf("%d\t",cur->data);
		cur=cur->next;
	}
}