#include<stdio.h>

char string_concate(char s[100])
{
    char s1[400],s2[100];
    int i, l=0,k;
    for(i=0;i<100;i++)
    {
        s2[i]='\0';
    }
    for(i=0;s[i]!='\0';i++)
    {
        s2[i]=s[i];
    }

   for(i=0;s2[i]!='\0';i++)
   {
     s1[l]=s2[i];
     l++;
   }
   s1[l]=" ";
   l++;
   k=l;
   printf("%s",s1);
   return s1;
}
void main()
{
    int m,i;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
      char s[100];
      gets(s);
       string_concate(s);
    }

}
