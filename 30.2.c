#include<stdio.h>
 struct point
 {
    float x;
     float y;
 };
 struct point mid(struct point m,struct point n)
 {
     struct point ans;
     ans.x= (m.x+n.x)/2;
     ans.y= (m.y+n.y)/2;
     return ans;
 };
int main()
{
    struct point p1={1,2};
    struct point p2={4,5};
    struct point p3;
    p3 =mid(p1,p2);
    printf("%0.2f %0.2f\n",p3.x,p3.y);
    return 0;
}
