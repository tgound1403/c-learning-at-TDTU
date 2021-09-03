#include<stdio.h>
#include<math.h>
int nhapmang ( int a[], int n)
{
    for (int i=0; i<=n; i++)
        scanf("%d", &a[i]);
}
int countDuplicate ( int a[], int n, int k)
{
    int count=0;
    for (int i=0; i<n; i++)
        if ( a[i]==k)
            count++;
    return count;
}
void main ()
{
    int a[100];
    int k,n;
    printf("so phan tu mang: ");
    scanf("%d", &n);
    nhapmang(a,n);
    printf("nhap vao phan tu muon kiem tra: ");
    scanf("%d", &k);
    printf("%d appear %d times in array", k, countDuplicate(a,n,k)); 
}