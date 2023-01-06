#include<stdio.h>
int funct(int n);
int main()
{
    int n;
    scanf("%d",&n);
    funct(n);
}
int funct(int n)
{
    int c;
  if(n>0)
  {
      c=n;
      while(n>=-c)
      {
         printf("%d ",n);
         n--;
      }
      printf("\n");
  }
  else
  {
      int b=n;
      while(n<=-b)
      {
          printf("%d ",n);
          n++;
      }
     printf("\n");
  }
}
