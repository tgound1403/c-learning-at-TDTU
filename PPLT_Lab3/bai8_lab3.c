#include <stdio.h>
int count( int n)
{
	int i=0;
	while (n!=0)
	{
		n=n/10;
		i++;
	}
	return i;
}
int main (int n) 
{
	printf("Moi ban nhap :");
	scanf("%d",&n);
	count(n);
	printf("so ki tu la: %d", count(n));
}