#include <stdio.h>

int main()
{
	int n,i;
	int s=1;
	printf("Enter n ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("%d",s);
}
