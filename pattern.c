#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of line n:\n");
    scanf("%d",&n);
    for(i=1;i<= n;i++)
    {
        for(j=1;j<=i;j++)
        {
           if(i!=n) 
           {if(j==1 || j==i)
            printf("#");
            else 
            printf(" ");

            } 
            else 
                printf("#");
            }

        printf("\n");
    }
}