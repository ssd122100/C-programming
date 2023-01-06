#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;
    scanf("%d\n",&n);
    char s[100];
    scanf("%[^\n]%*c",s);
    printf("%d\n",strlen(s));
    for(int i=0;s[i]!='\0';i++)
    { int flag = 0;
        for(int j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {   s[j]='1';
                flag=1;
            }
        }
     if(flag==0)
         sum++;
    }
    printf("%d",sum);
    return 0;
}
