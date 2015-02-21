#include<stdio.h>
struct sll
{
	int data;
	struct sll *next;
}*head=NULL;

/*Creating a node in the SLL*/
void createNode(int element)
{
	struct sll *temp=(struct sll*)malloc(sizeof(struct sll));
	temp->data=element;
	temp->next=NULL;
	head=temp;
	return;
}

/*Displaying list*/
void displayList()
{
	struct sll *temp;
	temp=(struct sll*)malloc(sizeof(struct sll));
	temp=head;
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return;
}

/*Inserting an element at the end of the list*/
void insertAtEnd(int element)
{
	struct sll *list,*temp;
	list=head;
	while(1)
	{
		if(list->next!=NULL)
		{	
			list=list->next;
		}
		else
			break;
	}
	temp=(struct sll*)malloc(sizeof(struct sll));
	temp->data=element;
	temp->next=NULL;
	list->next=temp;
	return;
}

/*Inserting an element at the begining of the list*/
void insertAtBegin(int element)
{
	struct sll *temp;
	temp=(struct sll*)malloc(sizeof(struct sll));
	temp->data=element;
	temp->next=head;
	head=temp;
	return;
	
}

/*Inserting an element in the middle of the list*/
void insertInMiddle(int element,int pos)
{
	int i;	
	struct sll *list,*temp;	
	list=head;
	for(i=1;i<pos-1;i++)
	{
		if(list==NULL)
			printf("In valid operaion");		
		list=list->next;
	}
	if(list->next==NULL)
		insertAtEnd(element);
	else
	{
		temp=(struct sll*)malloc(sizeof(struct sll));
		temp->data=element;		
		temp->next=list->next;
		list->next=temp;		
	}
	
	
}

/*Delete an emlement from begining of list*/
int deleteBegin()
{
    struct sll *list,*temp;
    list=head;
    temp=list->next;
    head=temp;
    return list->data;
    
}

/*Delete an elemet from the last of list*/
int deleEnd()
{
    struct sll *temp;
    int k;
    temp=head;
    while(1)
    {
      if(temp->next!=NULL)
	temp=temp->next;
      else
	break;	
    }    
    k=temp->data;
    free(temp);
    return k;
}

/*Delete an element in the middle from the list*/
int delMiddle(int pos)
{
    int i,k;
    struct sll *temp,*prev;
    temp=head;
    for(i=1;i<pos;i++)
    {
      if(temp==NULL)
	printf("invalid operaion");
      prev=temp;
      temp=temp->next;
    }
    if(temp->next==NULL)
      k=deleEnd();
    else
    {
	k=temp->data;
	prev->next=temp->next;
	free(temp);
    }
    return k;
}

/*Finding Nth element from left of he list*/
int nthElemFromLeft(int val)
{
  int n,i,count=0;
  struct sll *temp;
  temp=head;
  while(temp!=NULL)
  {
    if(count==val)
      return temp->data;
    count++;
    temp=temp->next;
  }
}

/*Finding Nth element from right of the list*/
int nthElemFromRight(int val)
{
  int i;
  struct sll *temp1,*temp2,*prev;
  temp1=head;
  temp2=head;
  for(i=0;i<val;i++)
  {
    temp1=temp1->next;
  }
  
  while(temp1!=NULL)
  {
    temp1=temp1->next;
    prev=temp2;
    temp2=temp2->next;
    
  }
  return prev->data;
}
main()
{
	int element,del,n,n1,m;	
	printf("Enter an element :");
	scanf("%d",&element);
	createNode(element);
	insertAtEnd(element+1);
	insertAtEnd(element+2);
	insertAtEnd(element+3);
	insertAtEnd(element+4);
	//insertAtBegin(element+4);
	insertInMiddle(element+5,3);
	//del=deleteBegin();	
	//del=deleEnd();
	//displayList();
	//del=delMiddle(3);
	//printf("\n%d is deleted..\n",del);
	displayList();
	printf("\nEnter the the position from left :");
	scanf("%d",&n1);
	n=nthElemFromLeft(n1-1);
	printf("\nElement in position %d from left is %d",n1,n);
	m=nthElemFromRight(n1-1);
	printf("\nElement in position %d from righ is %d",n1,m);
	
}
