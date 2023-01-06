#include<stdio.h>

int  even(int x);
int odd(int x);
void main()
{
    int n,k,l1=0,l2,i;
    scanf("%d %d",&n,&k);
    int a[100];
    for(i=1;i<n;i++)
    {
        if(even(i))
        {
            a[l1]=i;
            l1++;
        }
    }
    l2=l1;
    for(i=1;i<n;i++)
    {

        if(odd(i))
        {
         a[l2]=i;
         l2++;
        }
    }
    for(i=0;i<l2;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nThe %d th element in this sequence is %d\n",k,a[k-1]);
}
int even(int x)
{

    if(x%2==0)
        return 1;
    else return 0;
}
int odd (int x)
{

    if(x%2==1)
        return 1;
    else return 0;
}

