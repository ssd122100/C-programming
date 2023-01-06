#include<stdio.h>
struct comp
{
    double real;  //complex number
    double img;
};
void print_comp(struct comp c)
{
    printf("%0.2lf +%0.2lfi\n",c.real,c.img);
}
struct comp add_comp(struct comp a, struct comp b)
{
    struct comp add;
    add.real= a.real+ b.real;
    add.img= a.img+b.img;
    return add;
};
struct comp mul_comp(struct comp a, struct comp b)
{
    struct comp mul;
    mul.real= ((a.real*b.real)-(a.img*b.img));
    mul.img= ((a.real*b.img)+(a.img*b.real));
    return mul;
};
void main()
{
  struct comp c1={5.9,3.1} ;
  struct comp c2={-2.5,3.7};
  print_comp(c1);
  print_comp(c2);
  print_comp(add_comp(c1,c2));
  print_comp(mul_comp(c1,c2));
}
