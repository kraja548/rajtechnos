#include<stdio.h>
struct sll
{
	int data;
	struct sll *next;
}*head=NULL;
void createnode(int element)
{
	struct sll *temp;
	temp=(struct sll*)malloc(sizeof(struct sll));
	if(head==NULL)
	{
		temp->data=element;
		temp->next=NULL;
		head=temp;
	}
	printf("done\n");
}
void display()
{	
	struct sll *current;
	current=head;
	if(head=NULL)
	{
		printf("no data");
	}
	while(current!=NULL)
	{
		printf("%d\t",current->data);
		current=current->next;	
	}
	printf("\n");
}
void inserNodeAtEnd(int element)
{
	system("cls");
	struct sll *list,*temp;
	list=head;
	while(1)
	{
	 	if(list->next!=NULL)
		 	list=list->next;
		else
			break;	
	}
	
	temp=(struct sll *)malloc(sizeof(struct sll));
	temp->data=element;
	temp->next=NULL;
	list->next=temp;
	printf("Done\n");
}
void insertAtbegin(int element)
{
	system("cls");
	struct sll *temp;
	temp=(struct sll *)malloc(sizeof(struct sll));
	temp->data=element;
	temp->next=head;
	head=temp;
	printf("insertion at begin is done\n");
}
void insertAtMiddle(int element,int pos)
{
	int i;
	struct sll *list1,*temp1;
	system("cls");
	list1=head;
	for(i=0;i<pos;i++)
	{
		if(list1==NULL)
		{
			printf("invalid");
		}
		list1=list1->next;
	}
	if(list1->next==NULL)
 		inserNodeAtEnd(element);
	else
	{
		temp1=(struct sll *)malloc(sizeof(struct sll));
		temp1->data=element;
		temp1->next=list1->next;
		list1->next=temp1;
	}
	printf("done\n");
}

main()
{
	int ch,element,pos;
	while(1)
	{
		//system("cls");
		printf("1.create node\n2.dipslay\n3.insertAtEnd\n4.insertAtBegin\n5.insertAtMiddle\n6.insertinsorting\n7.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the element:\t");
					scanf("%d",&element);
					createnode(element);
					break;
			case 2: display();			
					break;
			case 3: printf("enter the element\t");					
					scanf("%d",&element);
					inserNodeAtEnd(element);
					break;
			case 4: printf("enter the element\t");
					scanf("%d",&element);
					insertAtbegin(element);
					break;
			case 5: printf("enter the element:\t");
					scanf("%d",&element);
					printf("Enter the position:\t");
					scanf("%d",&pos);
					insertAtMiddle(element,pos);
					break;
			case 6: printf("enter the element:\t");
					scanf("%d",&element);
					insertSortedOrder(element);
			case 7: exit(1);			
			default : printf("not valid\n");
		}
	}
}