#include <stdio.h>
long long int fact (long long int);
int main() {
    long long int per,com;
    int n,r;
    scanf("%d%d",&n,&r);
    per= fact(n)/fact(n-r);
    com= per/fact(r);
    printf("permutation of %d and %d is %lld\n",n ,r,per);
    printf("combinatation of %d and %d is %lld\n",n, r,com);
    return 0;
}
long long int fact (long long int n)
{
    int fac=1,i;
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}
