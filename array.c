#include<stdio.h>
void display(int a[],int st,int n)
{
    if(st>=n)
    return;
    else
   { printf("%d\t",a[st]);
    display(a,st+1,5);}
}
void main()
{
    int a[5]={1,2,3,4,5};
    display(a,0,5);
}