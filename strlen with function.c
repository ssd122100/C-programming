#include<stdio.h>
int length(char str[]);
void main()
{
    int l=0;
    char s[]= "shuvro shankar das";
    int len= length(s);
    for(int i=0;s[i]!='\0';i++)
    {
        l++;
    }
    printf("inside length function length =%d\n",len);
    printf("inside main function length= %d\n",l);
}

int length(char str[])
{
    int l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("%s\n",str);
    return l;
}
