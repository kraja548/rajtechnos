struct stsll
{
	int item;
	struct stsll *next;
}*head1=NULL;
void push(int n)
{
	struct stsll *list;	
	list=(struct stsll *)malloc(sizeof(struct stsll));
	list->item=n;	
	if(head1==NULL)
	{
		list->next=head1;		
		head1=list;		
	}
	else
	{
		list->next=head1;
		head1=list;
		
	}
}
struct stsll* pop()
{
	//int k;	
	struct stsll *temp1=NULL,*temp2;
	temp1=head1;	
	if(temp1==NULL)
		return NULL;	
	else
	{		
		temp2=temp1;
		head1=temp1->next;		
		return temp2;
	}
	
}
struct stsll* top()
{
	return head1;
}

int isEmpty()
{
	if(head1==NULL)
		return 1;
	else
		return 0;
}

void displayStack()
{
	struct stsll *temp;
	temp=head1;
	if(temp==NULL)
		printf("*** Stack is empty..!!\n");	
	while(temp!=NULL)
	{
		printf("%d\n",temp->item);
		temp=temp->next;
	}	
}

