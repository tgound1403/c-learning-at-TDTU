#include<stdio.h>
int digit ( int n ) 
{
	int a,b;
	while(n==0||n<0);
	a=n%10;
	while (n!=0)
	{
		b=n%10;
		n=n/10;
	}
	printf("%d %d", b,a);
}
void main (int n) 
{
	printf("Moi ban nhap :");
	scanf("%d",&n);
	digit(n);
}