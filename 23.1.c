#include<stdio.h>
void casechange(char s[100]);
void main()
{
    char s[100];
    scanf("%[^\n]%*c",s);
    casechange(s);
}
void casechange (char s[100])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
             s[i] = s[i] - 32;
        else if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    printf("%s\n",s);
}
