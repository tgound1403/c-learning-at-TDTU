//table of n 
#include <stdio.h>
int main ()
{
	int n,i; 
	printf("Ban muon bang cuu chuong may: " );
	scanf("%d",&n);
	for (i=1; i<=10;i++)
	{
		printf(" %d x %d = %d\n",n,i,n*i);
	}
}