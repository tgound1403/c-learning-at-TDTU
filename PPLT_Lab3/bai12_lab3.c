#include <stdio.h>
#include <stdlib.h>
int prime (int n)
{
	int i=0;
	for (i=2;i<n;i++)
	{
		if (n%i==0)
		{
			printf("%d is not prime number",n);
			exit(0);
		}
	}
	printf("%d is prime number",n);
}
void main ( int n ) 
{ 
    printf("Moi ban nhap :");
	scanf("%d",&n);
    prime(n);
}
