#include<stdio.h>
#include<math.h>
struct point {
int x;
int y;
int z;
};
void funct (struct point r1,struct point r2);
void main()
{
    struct point p1,p2;
    scanf("%d %d %d",&p1.x,&p1.y,&p1.z);
    scanf("%d %d %d",&p2.x,&p2.y,&p2.z);
    funct (p1,p2);
}
void funct (struct point r1,struct point r2)
{
  float distance =sqrt(pow((r1.x-r2.x),2)+pow((r1.y-r2.y),2)+pow((r1.z-r2.z),2));
    printf("%f",distance);
}


