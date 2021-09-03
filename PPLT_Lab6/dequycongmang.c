#include<stdio.h>
int sum (int a[], int n)
{
    if(n==0)
        return 0;
    //else if (a[n-1]%3!=0) // them 2 dong nay se thanh cong cac phan tu chia het cho 3
        //return sum(a,n-1);
    else return a[n-1]+sum(a,n-1);
}
void main ()
{
    int a[5]={3,5,4,9,2};
    int n=5;
    printf("%d ",sum(a,n));
}
