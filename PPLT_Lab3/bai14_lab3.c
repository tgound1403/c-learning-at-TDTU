#include<stdio.h>
int perfect( int n)
{
    int i=0;
    printf("Nhap n: ");
    scanf("%d",&n);
    int sum = 0;
    for(i=1;i<n;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) printf("%d la so hoan hao.",n); 
    else printf("%d khong phai la so hoan hao.",n);
}
void main ( int n )
{
    printf("Nhap n: ");
    scanf("%d",&n);
    perfect(n);
}