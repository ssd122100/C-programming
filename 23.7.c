#include<stdio.h>
void array_sort(int n,int a[50])
{
   int l,i,temp;
   l= n;
   for(i=0;i<l;i++)
   {
       for(int j=i+1;j<l;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
}

float median(int n, int a[50])
{
    int l,i;
    float med;
   l= n;
   array_sort(n,a);
    if(l%2==1)
    {
        med = a[(l-1)/2];
    }
    else{
        med = (a[(l-1)/2] + a[l/2])/2.0 ;
    }
    return med;
}
void main()
{
    int n, a[50];
    float med;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
   med = median(n,a);
   printf("\n%0.2f",med);
}
