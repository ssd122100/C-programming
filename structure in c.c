#include<stdio.h>
#include<math.h>
struct point {
int x;
int y;
int z;
};
void main()
{
    struct point p1,p2;
    scanf("%d %d %d",&p1.x,&p1.y,&p1.z);
    scanf("%d %d %d",&p2.x,&p2.y,&p2.z);
    float distance =sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2)+pow((p1.z-p2.z),2));
    printf("%f",distance);
}
