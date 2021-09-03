//sum of odd number to nn
#include <stdio.h>
int main()
{
	int n,i,s=0;
	printf("Moi ban nhap :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if (i%2)
		{
			s+=i;
		}
	}
	printf("= %d \n",s);
}