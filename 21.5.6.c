#include<stdio.h>

int divisor(int);
void main()
{
    int n;
    scanf("%d",&n);
    divisor(n);
}
int divisor(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            printf("%d ",i);
    }
}
