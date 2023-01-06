#include<stdio.h>
int count(int n)
{
    static int s=0;
    if (n!=0)
      {
        s++;
       
        count (n/10);
     } 
    
     return s;
}
void main()
{
    int n=2237;
    int d= count(n);
    printf("%d",d);
}