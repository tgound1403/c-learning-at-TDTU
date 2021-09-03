#include<stdio.h> 
int nhapmang (int a[], int n) 
{
    int i;    
    for (i=0; i <= n; i++)
    {
        printf("input factor %d of array: ",i+1);
        scanf("%d", &a[i]);
    }
    return 0;
}
int reverse (int a[], int n)
{
    int i; 
    printf("string after reverse: ");
    for (i=n; i >= 0; i--)
            printf("%d ", a[i]);
    return 0;
}
void main () 
{ 
    int a[50], n;
    printf("How many factor you want in array: ");
    scanf("%d", &n); 
    nhapmang(a,n);
    reverse(a,n);
}