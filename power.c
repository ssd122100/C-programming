#include<stdio.h>
int power(int m,int n)
{
    if(n==0)
    return 1;
    else
    return m*power(m,n-1);
}
void main()
{
    int m, n;
    scanf("%d %d",&m,&n);
    int res = power(m,n);
    printf("%d^%d = %d",m,n,res);
}
