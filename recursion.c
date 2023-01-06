#include<stdio.h>
void display(int n)
{
if(n>0)
{
    printf("%d ",n);
    display(n-1);
}
}
void main()
{
    int x=5;
    display(x);
}