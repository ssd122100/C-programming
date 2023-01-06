#include<stdio.h>
struct point {
float x;
float y;
};
struct triangle
{
   struct point A;
   struct point B;
   struct point C;
};
struct point centroid_of_triangle(struct triangle t)
{
  struct point ans;
  ans.x= (t.A.x+t.B.x+t.C.x) /3;
  ans.y= (t.A.y+t.B.y+t.C.y) /3;
  return ans;
};
void main()
{
    struct point p1={1,1};
    struct point p2={4,5};
    struct point p3={1,5};
    struct triangle V = {p1,p2,p3};
    struct point c = centroid_of_triangle(V);
    printf("centroid of triangle is (%0.2f,%0.2f)\n",c.x,c.y);

}
