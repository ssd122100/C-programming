#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int l,r;
        int flag=0;
        scanf("%d %d",&l,&r);
        for(int j=l;j<=r;j++)
        {
            for(int k=2;k<=j/2;k++)
            {
                if(j%k==0)
                { flag=1;
                break;}
            }
            if(flag==0)
                printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

