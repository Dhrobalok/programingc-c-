#include<stdio.h>
int p,q=0,m=0,i,k,l,a[50];
int push(int p)
{
while(p!=q)
{
    printf("Enter push number\t");
    scanf("%d",&l);
    a[q]=l;
    q++;
}


}

int pop(int p)
{
   printf("%d\n",p);

   while(p!=m)
   {

    printf("%d",a[m]);
    printf("->");
    m++;
}


}

int main()
{
   printf("Enter Total Number for push & pop ");
   scanf("%d",&k);
   push(k);
   printf("Pop Number is:\n");
   pop(k);
   return 0;

}
