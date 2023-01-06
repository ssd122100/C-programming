#include<stdio.h>
int digit_sum(int n)
{
    static int sum=0; 
    int rem;
    if(n!=0)
    {
        rem= n%10;
        sum+=rem;
        digit_sum(n/10);
    }
    return sum;
}
void main()
{
    int n= 22345;
    int s= digit_sum(n);
    printf("%d",s);
}