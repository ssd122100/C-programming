#include<stdio.h>
  int gcd(int x,int y)
{
 int min;
 if(x>y)
   min=y;
 else min=x;
 for(int i=min;i>=1;i--)
 {
     if(x%i==0 && y%i==0)
        return i;
 }
}
int lcm(int x,int y)
{
    int i;
    int max;
 if(x>y)
   max=x;
 else max=y;
    for(i=max;;i++)
    {
        if(i%x==0 && i%y==0)
            return i;
    }
}
int lcm_1(int x,int y)
{
    return (x*y/gcd(x,y));
}
int main()
{
   int x,y, gd;
   scanf("%d %d",&x,&y);
   gd= gcd(x,y);
   printf("gcd of %d and %d is %d\n",x,y,gd);
   printf("lcm of %d and %d is %d\n",x,y,lcm(x,y));
   printf("lcm of %d and %d is %d\n",x,y,lcm_1(x,y));
    return 0;
}
