#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *prev;
 struct node *next;

};
struct node *root=NULL;
struct node *currentnode=NULL;
struct node *newnode=NULL;
int doublylinklist(int m)
{

     if(root==NULL)
       {
          root=malloc(sizeof(struct node));
          root->data=m;
          root->prev=NULL;
          root->next=NULL;


       }
    else
       {
         currentnode=root;

         newnode=malloc(sizeof(struct node));
         newnode->data=m;
         newnode->prev=NULL;
         newnode->next=NULL;

         while(currentnode->next!=NULL)
         {
            currentnode=currentnode->next;
         }


         currentnode->next=newnode;
         newnode->prev=currentnode;


       }

}
//print the value as reverse;
int printvalue()
{
  struct node *u=NULL;
  u=newnode;
printf("The reverse value is:\n");
  while(u!=NULL)
  {
     printf("%d->",u->data);
     u=u->prev;
  }
  printf("\n");
}
//forward printprintf("/n");
int printfvalue()
{
printf("the forward value is:\n");
   currentnode=root;
  while(currentnode!=NULL)
  {
     printf(" %d->",currentnode->data);
     currentnode=currentnode->next;
  }
}

     //currentnode=currentnode->next->next;
int main()
{
  int i,j,k;
  printf("Enter the total number of list:\n");
  scanf("%d",&k);
  printf("Enter list value:\n");
  for(int i=0;i<k;i++)
  {
   scanf("%d",&j);
   doublylinklist(j);

  }

  printvalue();
  printfvalue();
  return 0;

}
