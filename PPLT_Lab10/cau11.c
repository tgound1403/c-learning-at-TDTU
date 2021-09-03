//cong cac so nguyen to trong mang 
#include<stdio.h>
#include<math.h>
int prime ( int n)
{
	int c=0;
	for ( int i=2; i<n; i++ )
	{
		if ( n%i==0)
			c++;
	}
	if (c==0) return 1;
	else return 0;
}
		
int sumprimearray ( int a[], int n)
{
	int sum=0;
	for ( int i=0; i<n; i++)
		if (prime(a[i])==1)
			sum += a[i];
	return sum ;
}
int nhapmang ( int a[], int n)
{
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
}
void main ()
{
	int a[100],n;
	printf("so phan tu mang: ");
	scanf("%d", &n);
	nhapmang(a,n);
	printf("tong cac so nguyen to trong mang: %d",sumprimearray(a,n));
}