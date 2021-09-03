#include<stdio.h>
int sumodd (int n) 
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		if (i%2!=0)
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
	sumodd(x);
	printf("TONG CAC SO LE LA: %d ",sumodd(x));
}	