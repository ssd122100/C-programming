#include<stdio.h>
int is_even(int);
void main()
{
    int n,flag;
    scanf("%d",&n);
    flag=is_even(n);
    if(flag==1) // or if(is_even(n))
        printf(" %d is an even number\n",n);
    else
       printf(" %d is a odd number\n",n);
}
int is_even(int x)
{
    if(x%2==0)
        return 1;
    else return 0;
}

