#include<stdio.h>
void pattern(int);
void main()
{

    int n;
    scanf("%d",&n);
    pattern(n);
}
void pattern(int n)
{
  int i,j,k,m=1;
  for(i=n;i>=0;i--)
  {
      for(k=1;k<m;k++)
      {
       printf(" ");

      }
      for(j=2*i+1;j>0;j--)
      {
        printf("*");
      }
      m++;
      printf("\n");
  }
}

