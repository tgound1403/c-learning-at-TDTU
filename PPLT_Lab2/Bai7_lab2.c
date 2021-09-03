//product of all digit in a number 
#include <stdio.h>
int main()
{
	int n,a,s=0;
	printf("Moi ban nhap :");
	scanf("%d",&n);
	s=1;
	while (n!=0)
	{
		a=n%10;
		s*=a;
		n=n/10;
	}
	printf("%d",s);
}
