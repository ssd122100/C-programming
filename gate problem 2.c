#include<stdio.h>
int f()
{
    static int num =10;
    return num--;
}
void main()
{
    for(f();f();f())
        printf("%d ",f());
}
