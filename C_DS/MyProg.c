#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include"sll.h"

/*Reversing the linked list without recursion*/
void reverseSll()
{
	struct sll *p,*q=NULL,*r;
	p=head;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
}

/*Reversing the linked list with recursion*/
void printReverseWithRecu(struct sll *list)
{
	if(list==NULL)
		return;	
	printReverseWithRecu(list->next);
	printf("%d ",list->data);
	
}

/*Checking wheather the list is palindrome or not*/
void isPalindrome()
{
	struct sll *temp,*temp2;
	temp=head;
	temp2=head;	
	while(temp!=NULL)
	{
		push(temp->data);
		temp=temp->next;
	}
	//displayStack();
	while(temp2!=NULL)
	{
		if(temp2->data==pop())
			temp2=temp2->next;
		else
			break;
		
	}
	if(temp2==NULL)
		printf("Its a Palindrome\n");
	else
		printf("Not a Palindrome\n");
	
}

/*Inserting elements in increasing order to the lis*/
void insertInSortOrder(int ele)
{
	printf("Bug is here 49\n");	
	struct sll *temp,*list;
	temp=(struct sll *)malloc(sizeof(struct sll));
	if(head==NULL)
	{
		printf("Bug is here 54\n");		
		temp->next=NULL;
		temp->data=ele;
		head=temp;
	}
	else
	{
		printf("Bug is here 61\n");		
		int count=1;		
		list=head;
		if(ele<head->data)
			insertAtBegin(ele);
		else
		{		
			printf("Bug is here 68\n");			
			//list=list->next;			
			while(list!=NULL)
			{printf("Bug is here 71\n");			
				if(ele<list->data)
					{
						printf("Bug is here 74\n");									
						count++;
						if(list->next!=NULL)
							insertInMiddle(ele,count);
						else
							insertAtEnd(ele);
						break;
					}
			}
			printf("Bug is here 83\n");			
			if(list==NULL)
				insertAtEnd(ele);
		}
	}
					
}



main()
{
	int element;
	int stp;
	printf("Enter an Element :");
	scanf("%d",&element);
	createNode(element);
	insertAtEnd(element+1);
	insertAtEnd(element+2);
	insertAtEnd(element+3);
	insertAtEnd(element+4);
	//insertAtBegin(element+4);
	insertInMiddle(element+5,3);
	insertAtEnd(element+6);
	insertAtBegin(element+7);
	displayList();
	printf("\n");	
	//reverseSll();
	//displayList();
	//printf("\n");
	printReverseWithRecu(head);
	//displayList();
	printf("\n");
/*-----------------------------------*/
/*	push(element);
	push(element+1);	
	push(element+2);
	push(element+3);	
	displayStack();
/*-----------------------------------*/
/*	createNode(2);
	insertAtEnd(5);
	insertAtEnd(6);
	insertAtEnd(5);	
	insertAtEnd(2);
	isPalindrome();*/
/*-----------------------------------*/
/*	insertInSortOrder(5);
	printf("Bug is here 116\n");
	insertInSortOrder(7);
	insertInSortOrder(1);
	insertInSortOrder(9);
	insertInSortOrder(6);
	displayList();*/
/*-----------------------------------*/
}
