#include<stdio.h>
int gcd_of_two(int m,int n)
{
while(m!=n)
{
    if(m>n)
        return gcd_of_two(m-n,n);
    else
        return gcd_of_two(m,n-m);
}
return m;
}
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int gcd= gcd_of_two(a,b);
    printf("%d",gcd);
}