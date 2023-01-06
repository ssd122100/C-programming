#include<stdio.h>

int is_prime(int);
void triangle_pattern(int);
void main()
{
    int n;
    scanf("%d",&n);
    triangle_pattern(n);
}
int is_prime(int x)
{
    int i;
    if(x<2)
        return 0;
    if(x==2)
        return 1;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return x;
}
void triangle_pattern(int n)
{
    int i,j,k,x=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            while(!is_prime(x))
          {
                x++;
          }
             printf("%d ",x);
             x++;
        }
        printf("\n");
    }
}

