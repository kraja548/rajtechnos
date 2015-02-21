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

