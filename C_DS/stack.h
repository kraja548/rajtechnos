struct stsll
{
	char item;
	struct stsll *next;
}*head1=NULL;
void push(char n)
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
char pop()
{
	char k;	
	struct stsll *temp1=NULL;
	temp1=head1;	
	if(temp1==NULL)
		return 0;	
	else
	{		
		k=temp1->item;
		head1=temp1->next;		
		return k;
	}
	
}
char top()
{
	return head1->item;
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
		printf("%c\n",temp->item);
		temp=temp->next;
	}	
}

