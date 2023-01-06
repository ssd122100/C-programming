#include<stdio.h>
struct student{
int roll;
char name[30];
double marks
};
void print_student(int n, struct student s)
{
     printf("information of student %d\n",n);
     printf("%d\n",s.roll);
     printf("%s\n",s.name);
     printf("%lf\n",s.marks);
}
void main()
{
    int i;
 struct student cls[5];
 for(i=0;i<5;i++)
 {
     scanf("%d",&cls[i].roll);
     scanf("%s",cls[i].name);
     scanf("%lf",&cls[i].marks);
 }
 double sum=0;
 for(i=0;i<5;i++)
 {

     if(cls[i].roll%2==0)
     {
         sum+= cls[i].marks;
       print_student(i,cls[i]);
     }

printf("Sum Of CGPA %0.2lf\n",sum);

 }
}
/*
122100
shuvro
3.43
122081
pial
3.25
122082
arun
3.3
122061
saifur
3.67
122078
tuhin
3.83
*/
