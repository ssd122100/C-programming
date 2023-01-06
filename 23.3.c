#include<stdio.h>
int funct1(long long int n);
int funct7(long long int n);
int funct9(long long int n);
void main()
{
    long long int n;
    scanf("%lld",&n);
    if(funct1(n)&& funct7(n) && funct9(n))
        printf("Yes\n");
    else
        printf("No\n");
}
int funct1(long long int n)
{
    int i,rem;
    while(n>0)
    {
        rem=n%10;
        if(rem==1)
        {
        return 1;
        }

         n=n/10;
    }
    return 0;
}
int funct7(long long int n)
{
    int i,rem;
    while(n>0)
    {
        rem=n%10;
        if(rem==7)
        {
        return 1;
        }

         n=n/10;
    }
return 0;
}
int funct9(long long int n)
{
    int i,rem;
    while(n>0)
    {
        rem=n%10;
        if(rem==9)
        {
        return 1;
        }

        n=n/10;
    }
return 0;
}
