//PRIME
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i=0;
	printf("Moi ban nhap :");
	scanf("%d",&n);
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
