#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int fact_ratio(int x,int y)
{
    int ratio;
    ratio= factorial(x)/factorial(y);
    return ratio;
}
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int fact1= factorial(a);
    int fact2= factorial(b);
    int ratio = fact_ratio(a,b);
    printf("factorial1=%d \n factoria2= %d \n ratio= %d\n",fact1,fact2,ratio);
}
