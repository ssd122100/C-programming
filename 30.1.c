#include<stdio.h>
#include<math.h>
struct point{
int x,y;
};
int manhattan_distance(struct point p1,struct point p2)
{
    int res= abs(p1.x-p2.x) + abs(p1.y-p2.y);
    return res;
}
float euclidean_distance(struct point p1, struct point p2)
{
    float distance =sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    return distance;
}
int main()
{
    struct point p1,p2;
    //struct point p1={1,1};
    //struct point p2={4,5};
    scanf("(%d,%d)\n",&p1.x,&p1.y);  // input can be taken as (1,2) format
    scanf("(%d,%d)",&p2.x,&p2.y);
    int ans= manhattan_distance(p1,p2);
    float dis = euclidean_distance(p1,p2);
    printf(" manhattan distance is -> %d\n",ans);  // determine euclidean distance
    printf(" Euclidean distance is -> %0.2f\n",dis);  // determine euclidean distance
    return 0;
}
