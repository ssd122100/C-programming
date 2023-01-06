#include<stdio.h>
void sort(int n ,int a[n]);
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(n, a);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

void sort(int n,int a[n])
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[j]<a[i])
            {temp=a[i];
          a[i]=a[j];
       a[j] =temp;}
      }
  }
}
