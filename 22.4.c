#include<stdio.h>
int add_array(int n,int x[])
{
 int sum=0;
 for(int i=0;i<n;i++)
 {
     sum+=x[i];
 }
 return sum;
}
void main()
{
  int a[]={13,74,174,234,4,3,6,345,54};
   int sum= add_array(9,a);
   printf("%d\n",sum);
}
