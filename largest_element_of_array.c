#include<stdio.h>
int n;
int large(int arr[])
{
static int i=0, maxx=0;
if(i<n)
{
    if(arr[i]>maxx)
        maxx= arr[i];
        i++;
        large(arr);   
}
return maxx;
}
void main()
{
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxx= large(arr);
    printf("%d",maxx);
}