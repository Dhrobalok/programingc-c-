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
 /* insert node of any position*/
 void insertafter(int f,int e)
 {
    currentnode=a;

    while(currentnode!=NULL)
    {
        if(currentnode->data==f)
        {
          //printf("%d",currentnode->data);

              newnode=malloc(sizeof(struct node));
             newnode->data=e;
             newnode->next=NULL;
             newnode->next=currentnode->next;
             currentnode->next=newnode;

        }


        currentnode=currentnode->next;
    }


 }
/* delete after value */

 void deleteafter(int d)
 {
   currentnode=a;
   while(currentnode!=NULL)
   {
     if(currentnode->data==d)
      {
         currentnode->next=currentnode->next->next;

      }
      currentnode=currentnode->next;

    }



 }

 /* print all node here */
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
   int n,i,u,m,o,v,j;
   printf("how many node do you creat\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
     printf("Enter value for node:\t=");
     scanf("%d",&u);
     memory(u);
   }

     print();

     printf("\n for continue 1 or 0 for exit\t:");
     scanf("%d",&m);
     if(m==1)
     {
          printf("\n Insert After node value :\n");
          scanf("%d",&v);
          printf("\nEnter new node value:\n");
          scanf("%d",&o);
          insertafter(v,o);
          printf("\nThe new node after insert is:\n");
          print();

          printf("\nDo you want to delete any node then press 2 or exit 0:\n");
          scanf("%d",&j);

            if(j==2)
               {
                 printf("\n Delete After node value :\n");
                 scanf("%d",&v);

                 deleteafter(v);
                 printf("\nThe new node after delete is:\n");
                 print();
                 return 0;

              }
            else
              {
                return 0
              }


     }


     else
     {

        return 0;
     }


 }
