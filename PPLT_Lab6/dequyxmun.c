#include<stdio.h>
int mu(int x, int n)
{
    if (n==0) // if (n==1)
        return 1; // return x;
    else return  mu(x,n-1)*x;
}
void main ()
{
    int x=2;
    int n=4;
    printf("%d",mu(x,n));
}