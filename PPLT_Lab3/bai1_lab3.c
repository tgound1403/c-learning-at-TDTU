#include<stdio.h>
int sumeven (int n) 
{
	int i;
	int s=0;
	for(i=1;i<=n;i++)
	{
		if (i%2==0)
		{
		s=s+i;
		}
	}
	return s;
}
void main () 
{
	int x;
	printf("Moi ban nhap :");
	scanf("%d",&x);
	sumeven(x);
	printf("TONG CAC SO CHAN LA: %d ",sumeven(x));
}	