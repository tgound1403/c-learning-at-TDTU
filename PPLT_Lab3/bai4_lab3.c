#include<stdio.h>
int sum (int n) 
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
	s=s+i;	
	}
	return s;
}
void main () 
{
	int x;
	printf("Moi ban nhap :");
	scanf("%d",&x);
	sum(x);
	printf("TONG CAC SO LA: %d ",sum(x));
}	
