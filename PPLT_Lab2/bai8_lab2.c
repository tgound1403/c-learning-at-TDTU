//count number of digit 
#include <stdio.h>
int main()
{
	int n,a,s=0;
	printf("Moi ban nhap :");
	scanf("%d",&n);
	while (n!=0)
	{
		a=n%10;
		s++;
		n=n/10;
	}
	printf("%d",s);
}
