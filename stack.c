#include<stdio.h>
int p,q=0,i,k,l,a[50];
int push(int p)
{
while(p!=q)
{
    printf("Enter push number\t");
    scanf("%d",&l);
    a[q]=l;
    q++;
}

if(p==q)
{
 printf("The stack is full:\n");
}

}

int pop(int p)
{

while(p!=0)
{
    p--;
    printf("%d",a[p]);
    printf("->");
}
if(p==0)
{
  printf("\nThe stack is empty:\n");
}
return 0;
}

int main()
{
   printf("Enter Total Number for push & pop ");
   scanf("%d",&k);
   push(k);
   printf("Pop Number is:\n");
   pop(k);


}
