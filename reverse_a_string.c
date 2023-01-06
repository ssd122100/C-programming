#include<stdio.h>
# define max 100
char* reverse(char str[])
{
 static char revstr[max];
 static int i=0;
if(*str)
{
    reverse (str+1);
    revstr[i++] =*str;
}
return revstr;
}
void main()
{
    char str[max];
    gets(str);
    char* revstr;
    revstr = reverse(str);
    puts(revstr);
}