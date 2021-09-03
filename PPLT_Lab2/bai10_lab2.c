#include <stdio.h>
int main()
{
	int n,a;
	int s=0;
	printf ("Enter n:");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	printf("%d",s);
}
