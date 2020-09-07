#include<stdio.h>
int i,j,k,a[4][4],b[4][4],m,n;
int main()
{
  printf("Enter The Node & Path");
  scanf("%d%d",&i,&j);
  for(m=0;m<i;m++)
  {
    for(n=0;n<j;n++)
    {
      printf("Enter The Path");
      scanf("%d",&k);
      a[m][n]=k;
      a[n][m]=k;
    }
}
    printf("Enter Node & path For Check ");
    scanf("%d%d",&m,&n);
    if(a[m][n]==1)
    {
      printf("yes ! between two node have a path");
    }
    else
    {
      printf("No ! between two node have no path");
    }
  printf("\n");
  printf("If you want to continue then press 1 else press 0\t");
  scanf("%d",&k);
  if(k==1)
  {
    main();
  }
  else
  {
    return 0;
  }


}

