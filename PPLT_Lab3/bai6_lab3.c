#include <stdio.h>
int sumdigit( int n)
{
	int a,s=0;
	while (n!=0)
	{
		a=n%10;
		s+=a;
		n=n/10;
	}
	return s;
}
int main (int n) 
{
	printf("Moi ban nhap :");
	scanf("%d",&n);
	sumdigit(n);
	printf("tong la: %d", sumdigit(n));
}