#include<stdio.h>

int is_binary(char s[100])
{
    int i,l,m=0;
    l=strlen(s);
    printf("%d\n",l);
    for(i=0;i<l;i++)
    {
        printf("%c ",s[i]);
        if(s[i]=='0' || s[i]=='1')
            m++;

    }
    printf("%d\n",m);
    if(l==m)
        return 1;
    else
        return 0;
}
void main()
{
    char str[100],flag;
    scanf("%[^\n]%*c",str);
    flag=is_binary(str);
    if(flag)
        printf("binary string\n");
    else
        printf("not binary\n");
}
