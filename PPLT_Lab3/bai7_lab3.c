#include <stdio.h>
int prodigit( int n)
{
	int a,s=1;
	while (n!=0)
	{
		a=n%10;
		s*=a;
		n=n/10;
	}
	return s;
}
int main (int n) 
{
	printf("Moi ban nhap :");
	scanf("%d",&n);
	prodigit(n);
	printf("tich la: %d", prodigit(n));
}