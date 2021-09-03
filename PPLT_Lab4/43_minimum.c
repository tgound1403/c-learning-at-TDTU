#include<stdio.h> 
int nhapmang (int a[], int n) 
{
    int i;    
    for (i=0; i <= n; i++)
    {
        printf("input factor %d of array: ",i+1); //nhap phan tu thu i+1 cua mang 
        scanf("%d", &a[i]);
    }
    return 0;
}
int min (int a[], int n)
{
    int i, min = a[0]; 
    for (i=0; i <= n; i++)
        if ( min >= a[i] ) 
            min = a[i]; 
    return min;
}
void main () 
{ 
    int a[50], n;
    printf("How many factor you want in array: "); //ban muon bao nhieu phan tu trong mang 
    scanf("%d", &n); 
    nhapmang(a,n);
    printf("minimum factor in array: %d ", min(a,n));// phan tu nho nhat cua mang la 
}