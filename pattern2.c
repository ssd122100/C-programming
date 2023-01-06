#include<stdio.h>
void main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=2*i+1;j++)
        {
            for(k=1;k<=n-i;k++)
            printf(" ");
            
            printf("*");
        }
        printf("\n");
    }
}