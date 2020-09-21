//preorder travers bst
#include<stdio.h>
#include<stdlib.h>
//#include<bits/stdc++.h>

struct node
{
  int data;
  struct node *l;
  struct node *r;
};
struct node *root=NULL;
struct node *currentnode=NULL;
struct node *newnode=NULL;

int bst(int d)
{
   newnode=malloc(sizeof(struct node));
   newnode->data=d;
   newnode->l=NULL;
   newnode->r=NULL;
   if(root==NULL)
    {
       root=newnode;
       root->data=d;
       root->l=NULL;
       root->r=NULL;
    }

    else
    {
      currentnode=root;
      while(currentnode!=NULL)
      {

      if(d<=currentnode->data)
      {
         if(currentnode->l==NULL)
         {
            currentnode->l=newnode;
            break;
         }
         else
         {
           currentnode=currentnode->l;
         }
      }

      else
      {

         if(currentnode->r==NULL)
         {
            currentnode->r=newnode;
            break;
         }
         else
         {
           currentnode=currentnode->r;
         }

      }
    }



    }
}

int preoder_recursive(struct node *r)
{
  if(r==NULL)
  return 0;
  printf("%d->",r->data);
  preoder_recursive(r->l);
  preoder_recursive(r->r);

}


int preoder(struct node *r)
{
struct node *u=r->r;
 while(r!=NULL)
 {
    printf("%d->",r->data);
    r=r->l;

 }


 while(u!=NULL)
 {
    printf("%d->",u->data);
    u=u->r;
 }



}

int inorder(struct node *in)
{

  if(in==NULL)
    return 0;

    inorder(in->l);
    printf("%d->",in->data);
    inorder(in->r);

}

int postorder(struct node *in)
{

  if(in==NULL)
    return 0;

     postorder(in->l);
     postorder(in->r);
     printf("%d->",in->data);


}

int main()
{

   int i,j,m,n;
   printf("Enter total node:\n");
   scanf("%d",&n);
   printf("Enter node value:\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&m);
     bst(m);
   }

   preoder_recursive(root);
   printf("\nprint without recursion:\n");
   preoder(root);
   printf("\nTravers inorder recursion:\n");
   inorder(root);
   printf("\nTravers postorder recursion:\n");
   postorder(root);


    return 0;

}



