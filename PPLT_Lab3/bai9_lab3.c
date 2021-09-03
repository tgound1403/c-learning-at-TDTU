#include<stdio.h>
#include<math.h>
int swap(int n)
{
	int a,b,w,m,i=0;
	int c=0;
	int z=1;
	m=n;
	a=n%10;
	while (n!=0)
	{
		b=n%10;
		n=n/10;
		c++;
	}
	if (a>b)
	{
		for (i=1;i<c;i++)z=z*10;
		w=m+( abs(b-a)*z);
		printf("%d",w-abs(a-b));
	}
	else 
	{
		for (i=1;i<c-1;i++)z=z*10;
		w=m-( abs(b-a)*z);
		printf("%d",w+abs(a-b));
	}
	return 0;
}
int main (int n) 
{
	printf("Moi ban nhap :");
	scanf("%d",&n);
	swap(n);
}
