#include<stdio.h>
#include<string.h>
void funct(int n, char s[100])
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        s[i]=(s[i]+n)%123;
        if(s[i]<97)
        s[i]=s[i]+97;
    }
}
void main()
{
    char s[100];
    int n;
    scanf("%d\n",&n);
    scanf("%[^\n]%*c",s);
    funct(n,s);
    printf("%s",s);

}
