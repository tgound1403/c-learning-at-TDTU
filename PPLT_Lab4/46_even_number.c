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
int sum (int a[], int n)
{
    int i, sum = 0; 
    for (i=0; i <= n; i++)
        if ( a[i]%2==0 )
            sum += a[i]; 
    return sum;
}
void main () 
{ 
    int a[50], n;
    printf("How many factor you want in array: ");
    scanf("%d", &n); 
    nhapmang(a,n);
    printf("sum all even factor in array: %d ", sum(a,n));
}