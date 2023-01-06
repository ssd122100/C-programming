#include<stdio.h>
int is_vowel(char c)
{
    if(c=='a'|| c== 'e' || c=='i' || c=='o'|| c=='u')
        return 1;
    else
        return 0;
}

void main()
{
    char ch;
    ch=getchar();
    getchar();
    if(is_vowel(ch))
        printf("the character is a vowel\n");
    else
        printf("the character is a consonant\n");
}
