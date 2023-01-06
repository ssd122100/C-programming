#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    int* ptr;
    scanf("%d\n",&n);
    ptr= (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
