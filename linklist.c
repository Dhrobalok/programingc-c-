#include<stdio.h>
#include<stdlib.h>
 struct node
 {
   int data;
   struct node *next;
 };
 struct node *a = NULL;
 struct node *currentnode=NULL;
  struct node *newnode=NULL;
 int memory(int m)
 {
  if(a==NULL)
  {

   a=malloc(sizeof(struct node));
   a->data=m;
   a->next=NULL;

  }
  else
  {
   //currentnode=malloc(sizeof(struct node));
   currentnode=a;             /*here i copy the a node inside currentnode because if first
                                node will be missing then another node will be loss;*/
    while(currentnode->next!=NULL)
    {
      currentnode=currentnode->next;
    }
    newnode=malloc(sizeof(struct node));
    newnode->data=m;
    newnode->next=NULL;
    currentnode->next=newnode;

  }
 }

 void print()
 {
    currentnode=a;              /*here i copy the a node inside currentnode because if first
                                node will be missing then another node will be loss;*/
    while(currentnode!=NULL)
    {

       printf("%d->",currentnode->data);
       currentnode=currentnode->next;

    }

 }

 int main()
 {
   int n,i,u;
   printf("how many node do you creat\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
     printf("Enter value for node:\t=");
     scanf("%d",&u);
     memory(u);
   }
    
   print();
   return 0;

 }
