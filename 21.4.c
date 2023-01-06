#include<stdio.h>
int even(int);
void main()
{
    int n;
    scanf("%d",&n);
    even(n);
}
int even(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
}
