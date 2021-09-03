//sum of all digit in a number 
#include <stdio.h>
int main()
{
	int n,a,s=0;
	printf("Moi ban nhap :");
	scanf("%d",&n);
	while (n!=0) // Ex: n=1234 -> a=4 ; s=0+4 ; n=123 
	{
		a=n%10;
		s+=a;
		n=n/10;
	}
	printf("%d",s);
}
