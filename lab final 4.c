#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int n,l=0;
        scanf("%d",&n);
       int num[100];
        while(n>0)
        {
         num[l]= n%10;
            l++;
            n=n/10;
        }
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(num[i]<num[j])
                { int temp= num[i];
                 num[i]=num[j];
                 num[j]=temp;
                }
            }
        }
        for(int i=0;i<l;i++)
        {
            printf("%c",num[i]+64);
        }
         printf("\n");
    }

    return 0;
}
