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
  for(i=1;i<=n;i++)
  {
      for(k=1;k<m;k++)
      {
       printf(" ");

      }
      for(j=2*n+1;j>0;j--)
      {
        printf("*");
      }
      m++;
      printf("\n");
  }
}
