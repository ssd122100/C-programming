#include<stdio.h>
int calculator(int ,int,char);
int main()
{
    int a,b,result;
    char ch;
    scanf("%d %d\n",&a,&b);
    scanf("%c",&ch);
    result=calculator(a,b,ch);
    printf("%d",result);
    return 0;
}
int calculator(int a,int b,char ch)
{
    if(ch=='+')
        return a+b;
    if(ch=='*')
        return a*b;
    if(ch=='/')
    {
        if(a>b)
            return a/b;
        else
            return b/a;

    }
    if(ch=='-')
    {
         if(a>b)
            return a-b;
        else
            return b-a;
    }
}
