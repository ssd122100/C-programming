#include<stdio.h>
int is_prime(int);
void main()
{
    int n;
    scanf("%d",&n);
    if(is_prime(n))
        printf("prime\n");
    else
        printf("not Prime\n");
}
int is_prime(int x)
{
    int i;
    int prime=0;
    if(x==0 || x==1)
        return 0;
    if(x==2)
        return 1;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
