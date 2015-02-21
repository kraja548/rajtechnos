#include<stdio.h>
#include<stdlib.h>
#include"treestack.h"
struct tree
{
  int data;
  struct tree *right;
  struct tree *left;
}*root=NULL;

void createRoot(int item)
{
  struct tree *node=(struct tree*)malloc(sizeof(struct tree));
  node->right=NULL;
  node->left=NULL;
  node->data=item;
  root=node;
}
void insert(int item)
{
  struct tree *node=(struct tree*)malloc(sizeof(struct tree));
  struct tree *temp=(struct tree*)malloc(sizeof(struct tree));
  temp->left=temp->right=NULL;
  temp->data=item;
  node=root;
  while(1)
  {
    if(node->data>item)
    {
      if(node->left==NULL)
      {
	node->left=temp;
	break;
      }      
      else
	node=node->left;
    }
    if(node->data<=item)
    {
      if(node->right==NULL)
      {
	node->right=temp;
	break;
      }
      else
	node=node->right;
    }
  }
}
void preOrderTraversal(struct tree *node1)
{
  if(node1)
  {
    printf("%d ",node1->data);
    preOrderTraversal(node1->left);
    preOrderTraversal(node1->right);
  }
}

void postOrderTraversal(struct tree *node1)
{
  if(node1)
  {    
    postOrderTraversal(node1->left);
    postOrderTraversal(node1->right);
    printf("%d ",node1->data);
  }
}

void inOrderTraversal(struct tree *node1)
{
  if(node1)
  {    
    inOrderTraversal(node1->left);
    printf("%d ",node1->data);
    inOrderTraversal(node1->right);    
  }
}

/*this method is not working properly.Have to be chesked*/
void nonRecPreOrder(struct tree *node)
{
  //while(1)
  //{
    while(node)
    {
      printf("%d ",node->data);
      push(node->data);
      node=node->left;
    }
    //displayStack();
   // if(isEmpty())
     // break;
    //displayStack();
    node=(struct tree*)pop();
    printf("\n");
    printf("-----\n");
    displayStack();
    printf("-----\n");        
    node=node->right;
    printf("%d",node->data);
  //}
}
main()
{
  int i=0,element;
  for(i=0;i<7;i++)
  {
    scanf("%d",&element);
    if(i==0)
      createRoot(element);
    else
      insert(element);
  }
  /*printf("Pre Order Traversal\n");
  preOrderTraversal(root);
  printf("\nPost Order Traversal\n");
  postOrderTraversal(root);
  printf("\nIn Order Traversal\n");
  inOrderTraversal(root);*/
  nonRecPreOrder(root);
}