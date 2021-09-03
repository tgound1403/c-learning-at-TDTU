#include<stdio.h>
int sum ( int a[], int n)
{
    if (n==1)
        return 1;
    else return a[n] + sum(a,n-1);
}
void main ()
{
    int a[5]={2,4,6,7,9};
    int n=5;
    printf("%d ", sum(a,n));
}