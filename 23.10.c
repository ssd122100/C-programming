#include<stdio.h>

char grade(int x);
void main()
{
    int marks;
    scanf("%d",&marks);
    char result;
    result = grade(marks);
    printf("%c\n",result);

}
char grade(int x)
{
    if(x>=80 && x<=100)
        return 'A';
    if(x>=60 && x<=79)
        return 'B';
    if(x>=40 && x<=59)
        return 'C';
    if(x>=0 && x<=39)
        return 'F';
}
