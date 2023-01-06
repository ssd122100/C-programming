#include<stdio.h>
void matrix_input(int , int ,int a[20][20]);
void matrix_output(int, int, int a[20][20]);
void matrix_multiplication(int a[20][20],int b[20][20],int ,int);
void matrix_addition(int a[20][20], int b[20][20],int m,int n);
void main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int a[20][20], b[20][20];
    printf("entering the elements of array\n");
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("entering the elements of array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    matrix_output(m,n,a);
    matrix_output(m,n,b);
   // matrix_input(m,n,b);
   matrix_addition(a,b,m,n);
    matrix_multiplication(a,b,m,n);
    //matrix_output(m,n,)
}
void matrix_input(int m, int n, int a[20][20])
{
    int i,j;
    printf("enter the elements of the matrix\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",&a[i][j]);
        }

    }

}

void matrix_output(int m, int n, int a[20][20])
{
    int i,j;
    printf("printing the matrix\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
void matrix_multiplication(int a[20][20],int b[20][20],int m ,int n)
{
  int mul[20][20], i,j,k ,sum;
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          sum=0;
          for(k=0;k<m;k++)
          {
            sum+=a[i][k]*b[k][j];
          }
          mul[i][j]= sum;
      }
  }
  matrix_output(m,n,mul);
}
void matrix_addition(int a[20][20], int b[20][20],int m, int n)
{
    int i,j,s[20][20];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s[i][j]= a[i][j]+b[i][j];
        }

    }
    matrix_output(m,n,s);
}
