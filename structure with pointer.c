#include<stdio.h>
struct student{

char name[50];
float marks;
int roll;
int age;
};
void main()
{
    struct student s;
    struct student* sp;
    sp= &s;
    scanf("%[^\n]%*c %f %d %d",sp->name,&sp->marks,&sp->roll,&sp->age);
    printf("%s %f %d %d",sp->name,sp->marks,sp->roll,sp->age);
}
