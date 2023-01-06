#include<stdio.h>
int length (int a[])
{
    int l;
    //l= sizeof(a)/sizeof(int);
    int arr_len = *(&a + 1)-a;
    return l;
}
void main()
{
    int a[]= {1,2,3,4,5,6,7,8,9,8,7,6,5,4,3,2,1};
    int l= length(a);
    printf("%d",l);
}
