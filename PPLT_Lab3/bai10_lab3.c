#include<stdio.h> 
int daoso ( int n)
{
    int a;
	int s=0;
    while(n!=0)
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
    return s;
}
void main ( int n ) 
{
    printf ("Enter n: ");
	scanf("%d",&n);
    printf("ket qua: %d", daoso(n));
}