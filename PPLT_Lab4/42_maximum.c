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
int max (int a[], int n)
{
    int i, max = a[0]; 
    for (i=0; i <= n; i++)
        if ( max <= a[i] ) 
            max = a[i]; 
    return max;
}
void main () 
{ 
    int a[50], n;
    printf("How many factor you want in array: ");
    scanf("%d", &n); 
    nhapmang(a,n);
    printf("maxmium factor in array: %d ", max(a,n));
}