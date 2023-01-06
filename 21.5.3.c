#include<stdio.h>
int funct(int);
void main()
{
    int n;
    scanf("%d",&n);
    funct(n);
}
int funct(int n)
{
    int a[n],sum=0,fd,ld,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ld=a[i]%10;
        fd=a[i]/1000;
        sum=sum+ld+fd;

    }
    printf("%d\n",sum);
}
