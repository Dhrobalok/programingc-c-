#include<stdio.h>

#define maxage 100

int i,j,m;
    /*  maximum age 5 among those people,,you can consider any age and thats mean all age are inside the range */
int ar[maxage];

int counting_algo(int a)
{
  printf("Enter age of people:\n");
  for(i=1;i<=a;i++)
  {
      scanf("%d",&m);/* here initially the array value is 0 and then if the age is single then the array value is increase
                        from 0 to 1 and 1 store array[m] position and then if the age value is same value .. the array[m]
                        value was 1 now it is 2 by increase...this is main concept of it..
                     */
        ar[m] = ar[m]+1;
  }

  printf(" Now the maximum number of age among this people:\n");

  for(j=1;j<=maxage;j++)
  {
   if(ar[j]>0)
   {
    printf("a[%d] is %d\n",j,ar[j]);
   }
  }

}
int main()
{
  int n;
  printf("Enter the total people:\n");
  scanf("%d",&n);

  counting_algo(n);
  return 0;
}
