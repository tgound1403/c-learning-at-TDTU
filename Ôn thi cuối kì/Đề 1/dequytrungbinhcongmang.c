#include<stdio.h>
float sum(int a[], int n, int m) 
{
    if (n == 0)
        return 0;
    else
        return ((float)a[n-1]/m + sum(a,n-1,m)) ;
}
/*{
    if (n >= 1) 
        return ((float)a[n-1]/m + sum(a,n-1,m));
    if (n == 0) 
        return 0 ;
}*/
void main ()
{
    int a[5]={1,2,3,4,5};
    int n=5;
    int m=n;
    printf("%f",sum(a,n,m));
}
