#include<stdio.h>
#include<string.h>
#include<math.h>
struct student
{
  int roll;

  char subject;
  double number;
  double credit;
};
struct student s1[20];
int main()
{

   int i,j,k,l;
   char*gp[20];
   double t_c,t_g[20],s_g,tcg;


   printf("Enter the student roll:\t");
   scanf("%d",&s1[0].roll);


  printf("Enter the number of subject:\t");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {

    printf("Enter the %d no subject:\t ",i);
    scanf("%s",&s1[i].subject);
    printf("Enter the %d no subject number:\t ",i);
    scanf("%lf",&s1[i].number);
    printf("Enter the %d no subject credit:\t ",i);
    scanf("%lf",&s1[i].credit);
    printf("\n");
    if(s1[i].number>80)
    {
      gp[i]="A+";
      t_g[i]=5.00*s1[i].credit;
    }
    else if(s1[i].number<80 && s1[i].number>=70)
    {
        gp[i]="A";
        t_g[i]=4.00*s1[i].credit;
    }
        else if(s1[i].number<70 && s1[i].number>=60)
    {
         gp[i]="A-";
        t_g[i]=3.50*s1[i].credit;
    }
        else if(s1[i].number<60 && s1[i].number>=50)
    {
         gp[i]="B";
        t_g[i]=3.00*s1[i].credit;
    }
        else if(s1[i].number<50 && s1[i].number>=40)
    {
         gp[i]="C";
         t_g[i]=2.50*s1[i].credit;
    }

            else if(s1[i].number<40 && s1[i].number>=33)
    {
        gp[i]="D";
        t_g[i]=2.00*s1[i].credit;
    }
    else
    {
      gp[i]="F";
      t_g[i]=0.00*s1[i].credit;
    }

  }
  for(j=0;j<k;j++)
  {

    s_g=t_g[j]+s_g;
    t_c=s1[j].credit+t_c;

    printf("sub %s=\t gpa= %s",s1[j].subject,gp[j]);

  }

  tcg=round(s_g/t_c);
  printf("cgpa of %d is = \t\t  %lf",s1[0].roll,tcg);


}
