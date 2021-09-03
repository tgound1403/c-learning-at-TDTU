#include <stdio.h>

int factorial(int n)
{
	int i;
	int s=1;
	for (i=1;i<=n;i++)
	{
		s=s*i;
	}
    printf("%d", s);
}
void main (int n) 
{ 
    printf("Enter n ");
	scanf("%d",&n);
    factorial(n);
}