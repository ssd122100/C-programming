#include<stdio.h>
struct point{
int x,y,z};
void main()
{
  struct point p[10];
  for(int i=0;i<10;i++)
  {
      scanf("%d %d %d",&p[i].x, &p[i].y,&p[i].z);
  }
  for(int i=0;i<10;i++)
  {
      printf("%d %d %d\n",p[i].x, p[i].y,p[i].z);
  }
}
